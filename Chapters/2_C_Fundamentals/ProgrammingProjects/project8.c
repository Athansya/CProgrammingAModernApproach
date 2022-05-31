#include <stdio.h>

int main(void)
{
  float loan, interest, monthly_payment;
  
  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &interest);
  interest = (interest / 100) / 12;
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  loan = (loan - monthly_payment) + (loan * interest);
  printf("Balance remaining after first payment: $%.2f\n", loan);

  loan = (loan - monthly_payment) + (loan * interest);
  printf("Balance remaining after second payment: $%.2f\n", loan);

  loan = (loan - monthly_payment) + (loan * interest);
  printf("Balance remaining after third payment: $%.2f\n", loan);

  return 0;
}
