# 0x0A. C - argc, argv
## What does argc, argv means
<p>
argc and argv are parameters passed to the main() function in C programs to provide access to command line arguments.

argc stands for "argument count". It is an integer value representing the number of arguments passed to the program from the command line.

argv stands for "argument vector". It is an array of character pointers listing all the arguments passed to the program. 

Here is an example prototype for main():

```c
int main(int argc, char *argv[])
``` 

When a C program is run:

- argc will contain the number of arguments passed to the program.

- argv will contain the actual arguments as an array of strings. 

For example, if a program was invoked with:

```
myprogram arg1 arg2 arg3
```

Then:

- argc will be 4 (the program name + 3 arguments)

- argv will contain:
    - argv[0] = "myprogram" 
    - argv[1] = "arg1"
    - argv[2] = "arg2" 
    - argv[3] = "arg3"

So argc and argv provide a way for the program to access all the command line arguments passed to it. The argument values can be retrieved from argv using the argc count for iteration.
</p>

### How to use arguments passed to your program
<p>
Here is an explanation of how to use arguments passed to a C program:

When a C program is executed from the command line, you can pass additional arguments after the program name. These arguments can be accessed by the program to customize its behavior.

For example:

```
myprogram arg1 arg2 arg3
```

The arguments are made available to the C program in the argv array, which is a parameter passed to the main() function. 

The prototype for main() is:

```c
int main(int argc, char *argv[])
```

Here:

- argc is an int containing the number of arguments passed.
- argv is an array of pointers to the argument strings. 

To access the arguments in C:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {

  // Print each argument
  int i;
  for (i = 0; i < argc; i++) {
    printf("Argument %d: %s\n", i, argv[i]); 
  }

  return 0;
}
```

This would print out each argument on a separate line.

The program name itself is in argv[0], so the arguments start at argv[1]. argc tells you how many strings are in argv.

So arguments provide a useful way to customize the behavior of a C program when running it. The argv array gives full access to the argument values as strings.
</p>

### What are two prototypes of main that you know of, and in which case do you use one or the other
<p>
The two most common prototypes for the main() function in C are:

1. int main(void)

```
int main(void) {
  // code
  return 0; 
}
```

This is used when the program does not take any command line arguments.

2. int main(int argc, char *argv[])  

```
int main(int argc, char *argv[]) {
  // code 
  return 0;
}
```

This is used when the program needs to access command line arguments passed to it.

argc is the argument count - the number of arguments passed.

argv is an array of pointers to the argument strings.

So in summary:

- Use int main(void) when you don't need command line arguments

- Use int main(int argc, char *argv[]) when you want to access the command line arguments

The command line arguments can be accessed using argc and argv. argc provides the number of arguments passed, and argv is used to retrieve the actual values as strings.

So the prototype for main() depends on whether the program requires access to command line arguments or not. Both forms are valid and commonly used.
</p>

### How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

<p>
In C, when you have a function with unused parameters or unused local variables, the compiler will usually issue a warning that these are unused. You can suppress these warnings using __attribute__((unused)) or a cast to void.

For unused parameters:

```
// Suppresses unused parameter warning
void myFunction(int x __attribute__((unused))) {
  // function body 
}

// Alternative way 
void myFunction(int x) {
  (void)x; // cast to void

  // function body
}
```

For unused local variables:

``` 
void myFunction() {
  int y __attribute__((unused)); // Suppresses unused variable warning

  // function body
}

// Alternative
void myFunction() {
  int y;
  (void)y; // cast to void

  // function body
}
```

The __attribute__((unused)) marker tells the compiler explicitly that the variable is meant to be unused. Casting to void has the same effect.

This is useful when you have to define a parameter or variable to match a prototype or interface, but don't actually use it in your function. Adding this avoids compilation warnings.

The __attribute__((unused)) marker is non-standard, but supported by common compilers like GCC and clang. Casting to void works in any C compiler.

So in summary, use __attribute__((unused)) or (void) casts to tell the compiler to suppress warnings about unused entities in your code.
</p>
