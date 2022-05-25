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

> :exclamation: The `main` function is a requisite for every C program. It gets called everytime the program is executed.

### Statements
Instructions to be executed when the programs runs. In this example in particular, we use a `return` statement and a **function call**. Simply put, the **calling** a function means utilizing it as in `printf(...)`. The `return 0` is a way of making sure that our program ends once it finishes the execution of the previous statements.

> :exclamation: Every statement must end with a semicolon `;`. 

## Additional notes.
- If you have any doubts about a function in particular, I suggest you use `man <function>` for a detailed explanation. Another great tool is `tldr <function>`.
- Here's two exceptional C reference Cheat sheets that you may reference at any time:
  - [C Reference Cheat Sheet](https://cheatography.com/ashlyn-black/cheat-sheets/c-reference/pdf/)
  - [Quick and Dirty Guide to C](https://courses.cs.washington.edu/courses/cse351/16wi/sections/1/Cheatsheet-c.pdf)

---
## Variables and Assignment
Let's talk variables and assignment. Most of the time you will need to store different *types* of data to be able to manipulate them. Storing data means to create a variable. The keyword here is *types*. So, what are types?

### Types
It just a way of specifying the class of data you are working with. There are different kinds of types, for example, you have numeric types as whole numbers, `int`, or decimal/floating point numbers, `float`. We also have character types, `char`, and other complex data types such as arrays, structs, etc. For now let's stick with the numeric types.

### Declarations
To create a variable, you must declare it, which means you have to assign its name, type and value. For example, let's declare a variables `height` and `profit` as follows:
```c
int height = 7;
float profit;
```
It seems that `profit` is missing its value, but we may add it later on.
If many variables share the same type, you can concatenate their declaration in the following manner:
```c
int height = 7, length = 2, width, volume;
float profit, loss;
```
> :exclamation: Before using a variable we have to declare it.
> :pencil2: A good practice when declaring `float` types is to append the suffix `f`: `float profit = 2.43f`.

Once we you have your variables, you may start using them for computations:
```c
height = 7;
length = 12;
width = 10;
volume = height * length * width; # volume is now 960
```

> :pencil2: The `*` operator represents multiplication in C.
