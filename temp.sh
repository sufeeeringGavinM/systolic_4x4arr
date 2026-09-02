./cvc +define+FUNCTIONAL +define+USE_POWER_PINS +define+ENABLE_SDF +typdelays +dump2fst +fst+parallel2=on sim/tb_MMU.v final/MMU.pnl.v -v lib/primitives_hd.v lib/sky130_fd_sc_hd.v

./cvcsim