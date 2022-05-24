# Chapter 2. C Fundamentals
## Writing a Simple Program
Here we are presented with our very first C program:

https://github.com/Athansya/CProgrammingAModernApproach/blob/bb561416a519bd73aef04b0368050260e679b4ac/Chapters/2_C_Fundamentals/pun.c#L1-L7

After compiling and running it with `cc -o pun.exe pun.c && ./pun.exe` it prints `To C, or not to C: that is the question`.

## Structue
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

> :warning: The `main` function is requisite for every C program. It gets called everytime the program is executed.

### Statements

