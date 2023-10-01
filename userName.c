#include <stdio.h>
#include <string.h>

int main(void)
{
  // declare variables
  char firstName[40];
  char lastName[40];
  int numOfFirst, numOfLast;

  // prompt user to enter first and last name
  printf("Enter your first name:\n");
  scanf("%s", firstName);

  printf("Enter your last name:\n");
  scanf("%s", lastName);

  // assign int variables to the length of the name variables using the strlen() function
  numOfFirst = strlen(firstName);
  numOfLast = strlen(lastName);

  // display output
  printf("%d, %d\n", numOfLast, numOfFirst);
  printf("%s, %s\n", lastName, firstName);

  return 0;
}
