

# FastSim: Version 1.0

#### This tool is used to parse RTL Verilog generated using Xilinx Vivado into an equivalent C Code.

Folder Structure
--------------------
Main Directory Structure:
1. **benchmark_examples** - running benchmark examples from CHStone, Bambu, etc.

Benchmark Example Structure:
1. **source_c_code** - source c code with testbench reading input from file.
2. **generated_c_code** - generated c code with testbench reading input from file.
3. **verilog** - pre-processed verilog file generated using our pre-processing module.
4. **verilog_original** - verilog generated as an output from Vivado HLS process.

**Note:** The source and generated c code directories contains README which contains command for running the C programs.


