# Which video?
These notes are from [episode 6](https://youtu.be/3tIqpEmWMLI)

# General
- To turn raw text (.cpp) into an executable, you need to complete two steps:
    1. Compiling
    2. Linking

# Purpose
- Takes our text file into an intermediate ".obj" files
- First, it pre-process our code
- Secondly, it tokenises our code (basically parsing the english cpp files) into something called an **abstract syntax tree**
- Basic prupose is to convert our code into constant data, or instructions


# Moving on..
- Every cpp file are translation unites to be converted to an obj file
- Assuming they are all seperate and not included one another. You can have 90 cpp files, with one of them including the other 89, and if you compile that one, it'll only be on obj file
- C++ Compiler doesn't care about files. If your filename is different to your function name, it doesn't care (unlike java)

- 4 Most common pre-processing statements
  - include
    - Basically a copy and paste of whatever file was included
  - define
    - Syntax: ```#define x y```
    - x is what you want to replace
    - y is what it will be replaced with
    - For example: ```#define INTEGER int``` means you can now use *INTEGER* to declare int variables
  - if
    - Can include or exclude code based on a given condition
    - Syntax: ```#IF *insert code here* #ENDIF
  - ifdef
- You can see the result of your preprocessing by going to project properties -> C/C++ -> Preprocessor -> Preprocess to a file set to YES
  - It will be output to a .i file
  - It supresses the output to a .obj file however
  

- To read the .obj file, first you should enable assembly only listing
  - Do this by going to project properties -> C/C++ -> Output file -> Assembler output -> Assembly only listing
  - This generates a .asm file which is a readble result of your .obj files

- Compiler does "constant folding" as well. Where anything that can be worked out at compile time, is. E.g. Writing 5\*2. In the .obj file (or .asm file for the readble version), 5\*2 turns up as 10

- eax is the return register