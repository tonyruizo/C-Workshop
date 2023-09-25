#include <stdio.h>

// 1 Whalp = 22.54 largets
// Prompt user to enter a weight in Whalps and convert to largets. Display output conversion for 4.44 whalps.

int main(void)
{
  // Declaring variable as floats
  float whalps;
  float largets;
  float convertedLargets;

  largets = 22.54;

  printf("1 whalp = 22.54 largets\n");
  printf("Lets convert whalps to largets.\n");

  // Prompt user to enter weight and read as float
  printf("Enter a weight in whalps: \n");
  scanf("%f", &whalps);

  // Calculation with function and assign to variable
  convertedLargets = whalps * largets;

  // Output conversion on terminal
  printf("%.2f in whalps is equal to %.2f in largets.", whalps, convertedLargets);

  return 0;
}
