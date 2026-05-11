`timescale 1ns / 1ps


module timer#(parameter int CLK_FREQ=50_000_000)(
    input logic clk_i,
    input logic rst_i,
    input logic [31:0] tim_pre,
    input logic [31:0] tim_are,
    input logic tim_clr,
    input logic tim_ena,
    input logic tim_mod,
    output logic [31:0] tim_cnt,
    output logic [31:0] tim_evn,
    input logic tim_evc
    );
    logic [31:0] internal_counter;
    logic [31:0] real_pre;
    
    assign real_pre=(tim_pre==32'hFFFF_FFFF)?(CLK_FREQ-1):tim_pre;
    
    always_ff @(posedge clk_i)begin 
        if(rst_i)begin 
            internal_counter<=0;
            tim_cnt<=0;
            tim_evn<=0;       
        end
        else begin
            if(tim_evc)begin // clear event count
                tim_evn<=0;
            end 
            if(!tim_ena) begin //enable
                if(tim_clr)begin //enable==0 and clr==1
                    tim_cnt<=0;                
                end
            end
            else begin
                if(tim_clr)begin //clear the counter
                        tim_cnt<=0;                
                end
                else begin
                    if(internal_counter==real_pre)begin
                        internal_counter<=0;
                        if(tim_mod)begin // count up
                            if(tim_cnt==tim_are)begin //if are is reached set count to 0
                                tim_cnt<=0;
                                if(!tim_evc) tim_evn <= tim_evn + 1; // if evc is 0 increase the event count
                            end
                            else begin 
                                tim_cnt<=tim_cnt+1;
                            end
                        end
                        else begin //count down
                            if(tim_cnt==0)begin //if 0 is reached set count to are
                                tim_cnt<=tim_are;
                                if(!tim_evc) tim_evn <= tim_evn + 1; // if evc is 0 increase the event count
                            end
                            else begin 
                                tim_cnt<=tim_cnt-1;
                            end
                        end
                    end
                    else begin 
                        internal_counter<=internal_counter+1;
                    end  
                end
            end
            
        end
        
    end

endmodule
