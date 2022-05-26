#include <stdio.h>

#define TAX 5

int main(void)
{
  float dollars_and_cents;
  printf("Enter an amount (dollars.cents): ");
  scanf("%f", &dollars_and_cents);

  float result = dollars_and_cents + (TAX * dollars_and_cents / 100);
  printf("With tax added: $%.2f", result);

  return 0;
}
