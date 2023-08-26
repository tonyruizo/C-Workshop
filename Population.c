#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  // TODO: Prompt for start size
  int startSize;
  do
  {
    printf("Sart size: ");
    scanf("%d", &startSize);
  } while (startSize < 9);

  // TODO: Prompt for end size
  int endSize;
  do
  {
    printf("End size: ");
    scanf("%d", &endSize);
  } while (endSize < startSize);

  // TODO: Calculate number of years until we reach threshold
  int years = 0;

  while (startSize < endSize)
  {
    startSize = startSize + (startSize / 3) - (startSize / 4);
    years++;
  }

  // TODO: Print number of years
  printf("Years: %i\n", years);
}
