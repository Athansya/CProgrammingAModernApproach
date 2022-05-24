# Chapter 2. C Fundamentals
## Writing a Simple Program
Here we are presented with our very first C program:

https://github.com/Athansya/CProgrammingAModernApproach/blob/bb561416a519bd73aef04b0368050260e679b4ac/Chapters/2_C_Fundamentals/pun.c#L1-L7

After compiling and running it with `cc -o pun.exe pun.c && ./pun.exe` it prints `To C, or not to C: that is the question`.

## Structure
A C program is divided into three main parts:
```
directives

int main(void)
{
  statements
}
```
### Directives
Commands intended for the preprocessor. In this particular example `#include <stdio.h>` requests the standard I/O library to be included. We need it to utilize the `printf` function.

### Functions
Defined as procedures or subroutines to be followed. They can be already implemented by C as **library functions** or user defined. It is a collection of statements that work together to achieve a result. It may or may not take arguments as input. Some functions `return` a value and others don't.

> :warning: The `main` function is a requisite for every C program. It gets called everytime the program is executed.

### Statements
Instructions to be executed when the programs runs. In this example in particular, we use a `return` statement and a **function call**. Simply put, the **calling** a function means utilizing it as in `printf(...)`. The `return 0` is a way of making sure that our program ends once it finishes the execution of the previous statements.

> :warning: Every statement must end with a semicolon `;`. 

## Additional notes.
- If you have any doubts about a function in particular, I suggest you use `man <function>` for a detailed explanation. Another great tool is `tldr <function>`.
- Here's two exceptional C reference Cheat sheets that you may reference at any time:
  -[C Reference Cheat Sheet](https://cheatography.com/ashlyn-black/cheat-sheets/c-reference/pdf/)
  -[Quick and Dirty Guide to C](https://courses.cs.washington.edu/courses/cse351/16wi/sections/1/Cheatsheet-c.pdf)

