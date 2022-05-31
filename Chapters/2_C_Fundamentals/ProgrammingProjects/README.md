# Programming Projects
1. Write a program that uses `printf` to display the following picture on the screen:
```
       *
      *
     *
*   *
 * *
  *
```

2. Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3 * pi * r^3. Write the fraction 4/3 as `4.0f/3.0f`. What happens? *Hint:* C doesn't have an exponentiation operator, so you'll need to multiply `r` byt itself twice to compute r^3.

3. Modify the previous program so that it prompts the user to enter the radius of the sphere.

4. Write a program that ask teh user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:
```
Enter an amount: 100.00
With tax added: $105.00
```

5. Write a program that asks the user to enter a value for `x` and then displays the value of the following polynomial:
$3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6$

6. Modify the previous program so that the polynomial is evaluated using the following formula:

$((((3x +2)x - 5)x - 1)x + 7)x - 6$

Note that the modified program performs fewer multiplications. This technique for evaluating polynomials is known as **Horner's Rule**.

7. Write a program that asks the user to enter a U.S doolar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:
```
Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3
```

8. Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:
```
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71
```
Display each balance with two digits after the decimal point. *Hint:* Each month, the balance is decreased by the amount of the payment, but increased by the balance times the monthly interest rate. To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12.
