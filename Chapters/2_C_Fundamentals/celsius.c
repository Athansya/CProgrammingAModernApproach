/* Name: celsius.c
 * Author: K.N.N
 * Objective: Convert a Fahrenheit temperature
 * to Celsius.
 */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
  // Variable definition and initialization
  float fahrenheit, celsius;
  
  printf("Enter Fahrenheit temperature: ");
  scanf("%f", &fahrenheit);

  // Computation
  celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
  
  // Printing result
  printf("Celsius equivalente: %.1f\n", celsius);

  return 0;
}