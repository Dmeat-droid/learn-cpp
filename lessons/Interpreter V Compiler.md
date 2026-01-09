# Interpreter V Compiler



### Compiler's Side

Adv:

* Speed at  runtime: because the code is translated into machine code ahead of time
* Optimizations: Because compilers can analyze the entire program and apply optimizations
* Lower memory overhead: The final executable doesn't need to carry extra information about the source code



Disadv:

* Slow Startup: it because it have to compile it first before it used
* Harder with dynamic features
* Less flexibility: You have to compile it again when you've changed anything



### Interpreter's Side

adv:

* Fast startup: no need to compile first
* Dynamic optimization
* Ease of debugging: It's easier to test and debug interactively since code runs line by line



disadv:

* Slower Execution: Each line must processed by the interpreter, adding overhead
* Higher memory usage, because it has to keep track more runtime information
* Less efficient for repeated tasks: Programs that run the same code many times can be slower.



*Source: https://stackoverflow.com/questions/38491212/difference-between-compiled-and-interpreted-languages/38491646*

