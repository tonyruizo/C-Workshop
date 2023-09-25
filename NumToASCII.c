#include <stdio.h>

// Prompt user to enter an ASCII code value (number) then convert to ASCII character.
// Display character outputs for 87 and 121.
int main(void)
{
  // Declare Variable
  int inputNum;
  char asciiCharacter;

  // Prompt user and assign input to a variable
  printf("Enter an ASCII code value (example: 67): \n");
  scanf("%d", &inputNum);

  // Convert to ASCII character
  asciiCharacter = (char)inputNum;

  // Output results
  printf("ASCII value code %d has been converted to ASCII character code %c.", inputNum, asciiCharacter);

  return 0;
}
