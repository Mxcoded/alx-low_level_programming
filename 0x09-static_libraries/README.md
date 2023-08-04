# Static libraries
### Here is an explanation in clear terms:

<p>Static and shared C libraries allow you to modularize and reuse code across multiple programs.

A static library contains compiled code that is archived into a single file with extension .a or .lib. When you link a C program against a static library, the relevant machine code from the library is copied into the final executable.</p> 

### Advantages of static libraries:
- No dependencies at runtime, executable contains all required code
- Slightly faster at runtime since no dynamic loading of code pieces

### Disadvantages:
- Code is duplicated in each executable that uses the library, resulting in larger binaries
- Updating the library requires recompiling all dependant programs

A shared library contains compiled code in a single file with extension .so (Linux) or .dll (Windows). The code is dynamically loaded at runtime when a program calls a function from the library.

### Advantages of shared libraries:
- Code is shared between executables rather than duplicated, resulting in smaller binaries
- Library can be updated without recompiling dependant programs
- Can share same library between multiple versions of a program

### Disadvantages: 
- Requires runtime loader to find the librarydynamic linking can add a small performance cost

<p>So in summary, static libraries simplify compilation and distribution of code, while shared libraries allow code reuse across multiple executables and easier updating of dependencies. Good practice is to use both approaches depending on the situation.</p>

<footer>
### Author
[Oluwasheyi Makanjuola](https://github.com/Mxcoded) 
</footer>
