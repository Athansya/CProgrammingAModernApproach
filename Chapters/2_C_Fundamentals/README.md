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
Let's talk variables and assignment. Most of the time you will need to store different types of data to be able to manipulate them. Storing data means to create a variable. The keyword here is **types**. So, what are types?

### Types
It just a way of specifying the class of data you are working with. There are different kinds of types, for example, you have numeric types as whole numbers, `int`, or decimal/floating point numbers, `float`. We also have character types, `char`, and other complex data types such as arrays, structs, etc. For now let's stick with the numeric types.

### Declarations
To create a variable, you must declare it, which means you have to assign its name, type and value. For example, let's declare a variables `height` and `profit` as follows:
```c
int height = 7;
float profit;
```
> :pencil2: Initializing a variable means assigning a value to it. It's a good practice to initialize variables to avoid unpredictable behavior when accessing them.

It seems that `profit` is missing its value, but we may add it later on.
If many variables share the same type, you can concatenate their declaration in the following manner:
```c
int height = 7, length = 2, width, volume;
float profit, loss;
```
> :exclamation: Before using a variable we have to declare it.

> :pencil2: A good practice when declaring `float` types is to append the suffix `f`: `float profit = 2.43f`.

Once you have declared your variables, you may start using them for computations:
```c
height = 7;
length = 12;
width = 10;
volume = height * length * width; // volume is now 960
```

> :pencil2: The `*` operator represents multiplication in C.

### Printing the Value of a Variable
Okay, we did a computation, but how do we display the result? We need the `printf` function we used earlier.
```c
printf("The volume is %.2f\n", volume");
```
> :pencil2: The `%.2f` just means that we want to print a floating point variable with just 2 decimals. You can check up more options with `man printf`

The following example implements what we know until now.

https://github.com/Athansya/CProgrammingAModernApproach/blob/4febcd042530b0fdd7905cd6afa9ddc29c00f097/Chapters/2_C_Fundamentals/dweight.c#L8-L25

## Reading Input
Hard coding everytime the variables we want to use each time a program is executed is painfuly slow. An alternative is to ask the user for an input. To obtain input, we'll use the `scanf` function. It has similar attributes to `printf`. Again, for more information, I suggest you use `man scanf`, everytime you have a doubt don't think twice and look up the function. Now, let's take a look at our improved code:

https://github.com/Athansya/CProgrammingAModernApproach/blob/53ae70e2a8514c39d0ffd5c3e9d398b5171c1ae0/Chapters/2_C_Fundamentals/dweight2.c#L8-L31

## Defining Names for Constants
Sometimes, when dealing with constants in your code, its a great idea to name them. For example, in `dweight.c` and `dweight2.c` we rely on the constant 166 to perform a computation. It may not be clear what does that number mean. That's why we need to name them. To solve this issue, we'll use a feature called **macro definition**. Its a different type of directive and it looks like the following:
```c
#define INCHES_PER_POUND 166
```
Now, everytime we wan't to use the constant will exchange it with its defined name.

> :pencil2: A macro may contain an expression, but it needs to be enclosed in parentheses.

Let's take a look at a different program that converts Fahrenheit to Celsius:

https://github.com/Athansya/CProgrammingAModernApproach/blob/f027b83a07e2ca1bf6a8c626bb4c847c2a6acbd9/Chapters/2_C_Fundamentals/celsius.c#L7-L27

## Identifiers
Naming a variable needs to follow some rules:
- Must begin with a letter or underscore
- Contains letters, digits and underscores
- It is **case-sensitive** so watch out (e.g. `job != Job != jOb`)

> :exclamation: It's convention to only use higher-case letters in **macros**.

> :pencil2: There are several ways to write long variable names, be sure to check them out.

### Reserved keywords
Many programming languages have special words reserved for the language itself and cannot be used as identifiers. C is not the exception, here's the list:

|          |          |          |             |
|----------|----------|----------|-------------|
| auto     | enum     | restrict | unsigned    |
| break    | extern   | return   | void        |
| case     | float    | short    | volatile    |
| char     | for      | signed   | while       |
| const    | goto     | sizeof   | \_Bool      |
| continue | if       | static   | \_Complex   |
| default  | inline   | struct   | \_Imaginary |
| do       | int      | switch   |             |
| double   | long     | typedef  |             |
| else     | register | union    |             |

## Final notes
We finally reached the end of the chapter. Before going over to the exercises, I would like to highlight some good practices:
1. C doesn't mind how many spaces or tabs you use, but it'll will afect the readability of the code, so have that in mind.
2. **Indentation** makes easier to spot where does a function begins and ends, plus it makes it easier to deal with nested functions/loops/statements.
3. Use **Blank lines** to your advantage to divide the different sections in your code.
4. Don't forget to add **comments** to your code.
