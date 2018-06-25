#include <stdio.h>
#include "mymath.h"


#define PI 3.14159


int main() {
  int radius;
  double area;

  printf("Enter the radius: ");
  scanf("%d", &radius);

  area = PI * square(radius);

  printf ("The area of a circle with radius %d is %.2f\n", radius, area);

  return 0;
}

