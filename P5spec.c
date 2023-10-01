#include <stdio.h>

// Constant
#define INT_VALUE 197
// Protoype
int froggy(int userInput);

int main(void)
{
    // Declare variables
    int userInput;

    // Prompt user to enter an integer
    printf("Enter an integer: \n");
    scanf("%d", &userInput);

    // Call function and assign the return value to variable "answer"
    int answer = froggy(userInput);

    // Display result
    printf("The multiplication answer is %d\n", answer);

    return 0;
}

// Function for foggy
int froggy(int userInput)
{
    int result;

    // Calculate and assign to variable "result"
    result = userInput * INT_VALUE;
    
    //return the result as int
    return result;
}