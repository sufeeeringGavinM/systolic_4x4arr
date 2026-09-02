`timescale 1ns/1ps

module tb_updown ();
    reg        clk;
    reg        nrst;
    reg        dir;
    wire [3:0] count;

	wire VDD;
	wire VSS;

    assign VDD = 1'b1;
    assign VSS = 1'b0;

    // instantiate unit under test (UUT)
    updown UUT (
    `ifdef USE_POWER_PINS
        .VPWR  (VDD),
        .VGND  (VSS),
    `endif
        .clk   (clk),
        .nrst  (nrst),
        .dir   (dir),
        .count (count)
    );

    always
        #5 clk = ~clk;

    `ifdef ENABLE_SDF
        initial begin
            $sdf_annotate("final/updown__nom_tt_025C_1v80.sdf", UUT);
        end
    `endif

    initial begin
        $dumpfile("tb_updown.vcd");
        $dumpvars(0, tb_updown);
        clk  = 1'b0;
		nrst = 1'b0;
		dir  = 1'b1;
		#50
		nrst = 1'b1;
		#200
		dir  = 1'b0;
		#150
		nrst = 1'b0;
		#30
		nrst = 1'b1;
		#200
		$finish;
    end

endmodule