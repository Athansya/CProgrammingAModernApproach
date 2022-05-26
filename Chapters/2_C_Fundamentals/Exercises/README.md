# Exercises
1. Create and run Kernighan and Ritchie's famous "hello, world" program:
```c
#include <stdio.h>

int main(void)
{
  printf("hello, world"\n);
}
```
Do you get a warning message from the compiler? If so, what's needed to make it go away?

2. Consider the following program:
```
#include <stdio.h>

int main(void)
{
  printf("Parkinson's Law:\nWork expands so as to ");
  printf("fill the time\n");
  printf("available for its completion.\n");

  return 0;
}
```
(a) Identify the directives and statements in this program.

(b) What output does the program produce.

3. Condense the `dweight.c` program by (1) replacing the assignments to `height`, `length` and `width` with initializers and (2) removing the `weight` variable, instead calculating `(volume + 165) / 166` with the last `printf`.

4. Write a program that declares several `int` and `float` variables -- without initializing them -- and then prints their values. Is there any patter to the values? (Usually there isn't.).

5. Which of the following are not legal C identifiers?

(a) `100_bottles`

(b) `_100_bottles`

(c) `one__hundred__bottles`

(d) `bottles_by_the_hundred_`

6. Why is it not a good idea for an identifier to contain more than one adjacent underscore (as in `current__balance`, for example)?

7. Which of the following are keywords in C?

(a) `for`

(b) `If`

(c) `main`

(d) `printf`

(e) `while`


**Aditional Notes**

I didn't included all the exercises because I don't consider them particularly helpful.
