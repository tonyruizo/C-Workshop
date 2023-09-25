#include <stdio.h>

#define GARLIEF_SIDE1 3.15
#define GARLIEF_SIDE2 4.03

int main(void)
{
  // declare float variables
  float side1, side2, area;

  // prompt user to enter the side values
  printf("Enter value for side 1:\n");
  scanf("%f", &side1);

  printf("Enter value for side 2:\n");
  scanf("%f", &side2);

  // calculation for area
  area = (side1 * GARLIEF_SIDE1) + (side2 * GARLIEF_SIDE2);

  // display the result
  printf("The area is %.2f.\n", area);

  return 0;
}
