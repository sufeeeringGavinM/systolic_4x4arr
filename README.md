# systolic_4x4arr

This repo is a fork of a 4x4 Systolic Array implementation with a Weight Stationary Dataflow. Input activations enter downwards, weights and accumulations happen rightwards. Slides describing how it works are present in the pdf file.

The Verilog source code files are present in the **rtl** folder and the testbench file along with scripts used to run them are present in the **sim** folder. 

This was synthesized using IIC-OSIC-TOOLS and with the open source SKY130 PDK. To run the synthesized version, run ./cvcsim.  To rerun the simulation, check out temp.sh. Final synthesized .pnl.v and .sdf for simulation are located in the folder "final"

The old synthesized version by the original repo is found in "synth"
