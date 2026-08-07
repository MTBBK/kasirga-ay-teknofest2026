package accelerator_config_pkg;
    
        localparam int FEEDLANE_COUNT = 1;//normal hali 10
        
    typedef logic [7:0] feeder_t [0:FEEDLANE_COUNT-1][0:7];
    typedef logic [7:0] feeder_sa_output_t [0:FEEDLANE_COUNT-1];
    
endpackage :accelerator_config_pkg
