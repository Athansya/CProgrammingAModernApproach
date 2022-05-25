/* Name: dweight.c
 * Author: K.N.N
 * Objective: Computate the volume and weight of a box based
 * on US shipping companies allowable number of cubic inches
 * per pound (166).
 */

#include <stdio.h>

int main(void)
{
  int height, length, width, volume, weight;

  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166; // We add 165 to help round up the result

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}
