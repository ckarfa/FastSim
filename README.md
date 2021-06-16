

# FastSim: Version 1.0

#### This tool is used to parse RTL Verilog generated using Xilinx Vivado into an equivalent C Code. Our tool support RAM,ROM and function modules along with some HLS optimization like loop unroll, instruction level pipelining and task level pipelining. 

Folder Structure
--------------------
Main Directory Structure:

 **benchmark_examples** 
 
  1. **Bambu** - It contains motion, arf, and waka benchmark example taken from the Bambu HLS tool.
  2. **CHStone** - It contains benchmark examples from CHStone Benchmark Suite. Floating-point addition (dfadd), multiplication (dfmul) 
                  and subtraction (dfsub) are control intensive benchmark programs with several conditional statements and larger benchmark programs
                  like des, aes and mips are data intensive programs with several arrays and function calls.
  3. **dataflow** - It includes examples on which dataflow optimization is applied. Insertion sort and toy examples are implemented dataflow in FIFO style whereas merge_sort, FFT, historam, and toy examples are implemented dataflow in ping-pong buffer style.
  4. **pipeline** - It contains aes_encrypt, aes_decrypt and des examples on which pipeline optimization is applied.
  5. **unroll** -  It contains aes_encrypt, aes_decrypt and des examples on which loop unroll optimization is applied.
                  

Benchmark Example Sub-directory Structure:

  1. **source_c_code** - source c code with testbench reading input from file.
  2. **generated_c_code** - generated c code with testbench reading input from file.
  3. **verilog** - pre-processed verilog file generated using our pre-processing module.
  4. **verilog_original** - verilog generated as an output from Vivado HLS process.

**Note:** The source and generated c code directories contains README which contains command for running the C programs.

**Citation**
------------------------
I'd appreciate it if you could take a look at the following abstract and please cite it if it helps your work.

    @article{FastSimTCAD,
      author = {M. Abderrahman and J. Patidar and J. Oza and Y. Nigam and TM AbdulKhader and C. Karfa},
      title = {FastSim: A Fast Simulation Framework for High-Level Synthesis},
      journal = {IEEE Transactions on Computer-Aided Design of Integrated Circuits and Systems},
      year = {2021}
    }

