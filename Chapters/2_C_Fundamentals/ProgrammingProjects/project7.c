#include <stdio.h>

int main(void)
{
  int dollars;
  printf("Enter a dollar amount: ");
  scanf("%d", &dollars);

  int dollars_20 = dollars / 20;
  dollars -= 20 * dollars_20;
  int dollars_10 = dollars / 10;
  dollars -= 10 * dollars_10; 
  int dollars_5 = dollars / 5;
  dollars -= 5 * dollars_5;
  int dollars_1 = dollars;
  
  printf("\n");
  printf("$20 bills: %d\n", dollars_20);
  printf("$10 bills: %d\n", dollars_10);
  printf(" $5 bills: %d\n", dollars_5);
  printf(" $1 bills: %d\n", dollars_1);

  return 0;
}
