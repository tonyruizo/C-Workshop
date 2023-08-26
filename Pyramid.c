#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  printf("\n");
  printf("Hello there! Lets create a pyramid.\n");
  printf("\n");

  int userInput;

  do
  {
    printf("How tall would you like your pyramid to be? (enter a number from 1 to 8.) \n");
    scanf("%d", &userInput);
  } while (userInput < 1 || userInput > 8);

  for (int i = 0; i < userInput; i++)
  {
    // Print the spaces
    for (int j = 0; j < userInput - i - 1; j++)
    {
      printf(" ");
    }

    // Print hashes
    for (int j = 0; j <= i; j++)
    {
      printf("#");
    }

    // Next line
    printf("\n");
  }

  printf("\n");
  printf("You chose %i, and there it is. Thank you for creating the pyramid.\n", userInput);
}
