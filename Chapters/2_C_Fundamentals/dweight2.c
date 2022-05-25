/* Name: dweight2.c
 * Author: K.N.N.
 * Objective: Compute the volume and dimensional weight
 * of a box defined by a user following US shipping
 * companies allowable number of cubic inches per pound.
 */

#include <stdio.h>

int main(void)
{
  int height, length, width, volume, weight;

  // User input
  printf("Enter height of box: ");
  scanf("%d", &height);
  printf("Enter length of box: ");
  scanf("%d", &length);
  printf("Enter width of box: ");
  scanf("%d", &width);
  
  // Computation
  volume = height * length * width;
  weight = (volume + 165) / 166;

  // Print results
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}
