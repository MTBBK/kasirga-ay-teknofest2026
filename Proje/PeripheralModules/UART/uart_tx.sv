// 4-bit Counter Design
module  uart_tx(
    input  logic        clock_i,
    input  logic 		reset_i,
    input  logic [31:0] uart_cpb, //Clock-per bit
    input  logic [31:0] uart_stp, //Stop bit
    input  logic [31:0] uart_tdr, //Data = uart_tdr[7:0]
    input  logic tx_enable, //UART_CFG[0]
 
    output logic tx_done, //UART_CFG[2]
    output logic tx_out //Real Output
);

	typedef enum logic [1:0] {IDLE, START, FLOW, STOP} states;
	states state, state_next;
	logic [31:0] baud_counter, baud_counter_next;
	logic [31:0] stop_limit;
	logic [7:0]  our_data;
	logic [2:0] bit_index, bit_index_next;
	
    always_ff @(posedge clock_i) begin
        if (!reset_i) begin
            state_reg    <= IDLE;
            baud_counter <= 0;
            bit_index    <= 0;
            tx_out       <= 1'b1; // UART Idle is high
            tx_done      <= 1'b0;
        end else begin
			state <= state_next;
			baud_counter <= baud_counter_next;
			bit_index <= bit_index_next;
			
			case(uart_stp)
				2'b00: stop_limit = uart_cpb; //1
				2'b01: stop_limit = uart_cpb + (uart_cpb >> 1); //1.5
				2'b10: stop_limit = (uart_cpb << 1); //2
				2'b11: stop_limit = (uart_cpb << 1); //2
			endcase
		end
    end
    
    always_comb begin
		state_next = state;
		baud_counter_next = baud_counter;
		bit_index_next = bit_index;
		if(!tx_enable)begin
			state_next = IDLE;
			baud_counter_next = 0;
			bit_index_next = 0;
			tx_out = 1'b1;
		end
		case(state)
			IDLE: begin
				tx_out <= 1'b1;
				tx_done <= 1'b0;
				if(tx_enable)begin
					our_data <= uart_tdr;
					state_next <= START;
					baud_counter_next <= 0;
				end
			end
			START: begin
				tx_out <= 1'b0;
				if(baud_counter >= uart_cpb - 1)begin
					baud_counter_next <= 0;
					state_next <= FLOW;
					bit_index_next <= 0;
				end else begin
					baud_counter_next <= baud_counter + 1;
				end
			end
			FLOW: begin
				tx_out <= our_data[bit_index];
				if(baud_counter >= uart_cpb - 1)begin
					baud_counter_next <= 0;
					if(bit_index == 3'b111)begin
						state_next <= STOP;
						bit_index_next = 0;
					end else begin
						bit_index_next <= bit_index + 1;
					end
				end else begin
					baud_counter_next <= baud_counter + 1;
				end
			end
			STOP: begin
				tx_out <= 1'b1;
				if(baud_counter >= stop_limit - 1)begin
					baud_counter_next <= 0;
					tx_done <= 1'b1;
					state_next <= IDLE;
				end else begin
					baud_counter_next <= baud_counter + 1;
				end
			end
			default: state <= IDLE;
		endcase
		end
	end

endmodule

