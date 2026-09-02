`timescale 1ns/1ps

module tb_MMU;

   reg clk;
   reg control;
   reg [31:0] data_arr;
   reg [31:0] wt_arr;

   wire [127:0] acc_out;

	assign VDD = 1'b1;
    assign VSS = 1'b0;

   MMU UUT (
   `ifdef USE_POWER_PINS
        .VPWR  (VDD),
        .VGND  (VSS),
    `endif
      .clk(clk),
      .control(control),
      .data_arr(data_arr),
      .wt_arr(wt_arr),
      .acc_out(acc_out)
   );

   always
      #250 clk = !clk;

   initial begin
      clk = 0;
      control = 0;
      data_arr = 0;
      wt_arr = 0;
      #20000;
   end

	`ifdef ENABLE_SDF
		initial begin
			$sdf_annotate("final/MMU__nom_tt_025C_1v80.sdf", UUT);
		end
	`endif

   initial begin
	  $dumpfile("tb_MMU.vcd");
      $dumpvars(0, tb_MMU);
   
      @(posedge clk);
	  #10
      control <= 1;
      wt_arr  <= 32'h05020304;

      @(posedge clk);
	  #10
      wt_arr  <= 32'h03010203;
		
      @(posedge clk);
	  #10
      wt_arr  <= 32'h07040102;

      @(posedge clk);
	  #10
      wt_arr  <= 32'h01020403;   

      @(posedge clk);
	  #10
      control  <= 0;
      data_arr <= 32'h00000001;

      @(posedge clk);
	  #10
      data_arr <= 32'h00000102;

      @(posedge clk);
	  #10
      data_arr <= 32'h00010200;

      @(posedge clk);
	  #10
      data_arr <= 32'h00010100; 
                            
      @(posedge clk);    
	  #10	  
      data_arr <= 32'h02030201; //end of 1st matrix, start of 2nd
              
      @(posedge clk); 
	  #10      
      data_arr <= 32'h04010206;
                            
      @(posedge clk);    
	  #10	  
      data_arr <= 32'h05030701;
                        
      @(posedge clk);   
	  #10
      data_arr <= 32'h04090205;

	  @(posedge clk);   
	  #10
      data_arr <= 32'h0A030900;
	  
	  @(posedge clk);   
	  #10
      data_arr <= 32'h040B0000;
	  
	  
	  @(posedge clk);  
	  #10	  
      data_arr <= 32'h01000000;
	  
	  @(posedge clk);   
	  #10
      data_arr <= 32'h00000000;
	  
	  repeat (30) @(posedge clk); 
 
	  $finish(1);
	  
   end

   // original checks EVERYTIME acc_out changes. it is a pain in the ass post-RTLtoGDSII process
   //initial begin
   //   $monitor("[OUTPUT] time=%0t y3=%0d, y2=%0d, y1=%0d, y0=%0d",
   //      $time, acc_out[127:96], acc_out[95:64], acc_out[63:32], acc_out[31:0]);
   //end
   
   
   always @(posedge clk) begin
	   #10; // sample near end of period
	   $display("[OUTPUT] time=%0t y3=%0d, y2=%0d, y1=%0d, y0=%0d",
         $time, acc_out[127:96], acc_out[95:64], acc_out[63:32], acc_out[31:0]);
	end

endmodule
