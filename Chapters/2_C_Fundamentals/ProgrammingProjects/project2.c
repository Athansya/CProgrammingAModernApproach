#include <stdio.h>

#define PI 3.1416f

int main(void)
{
  float radius;

  printf("Enter the radius of the sphere (meters): ");
  scanf("%f", &radius);

  float volume = (4.0f/3.0f) * PI * (radius * radius * radius);
  printf("The volume of the sphere of radius %.2f m is: %.2f m^3", radius, volume);

  return 0;
}
