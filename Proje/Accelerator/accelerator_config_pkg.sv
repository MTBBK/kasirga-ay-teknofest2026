package accelerator_config_pkg;
    
        localparam int FEEDLANE_COUNT = 10;//normal hali 10
        
    typedef logic [7:0] feeder_t [0:FEEDLANE_COUNT-1][0:7];
    typedef logic [7:0] feeder_sa_output_t [0:FEEDLANE_COUNT-1];
    typedef logic signed [7:0] weight_lane_t [0:7];
    
endpackage :accelerator_config_pkg
