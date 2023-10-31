#include <stdio.h>

int main() {

    // declaring variables
    int userInput;
    int totalEvenNum = 0;
    int totalOddNum = 0;
    int addEvenNum = 0;
    int addOddNum = 0;

    // prompt user
    printf("Enter positive integers. When done, enter 999: \n");

    // while integer is positive
    while (userInput > 0) {
        scanf("%d", &userInput);
        // break out of while loop
        if (userInput == 999) {
            break;
        }

        // check if negative
        if (userInput < 0) {
            printf("Provide a positive integer.\n");
            continue;
        }
        // check if its an even number
        if (userInput % 2 == 0) {
            // count the even numbers
            totalEvenNum++;
            // add user input number
            addEvenNum += userInput;
        }
        else {
            totalOddNum++;
            addOddNum += userInput;
        }
    }

    // display total sum and average
    printf("Total number of even integers: %d\n", totalEvenNum);
    printf("The Average value of even integers: %d\n", addEvenNum / totalEvenNum);
    printf("Total number of odd integers: %d\n", totalOddNum);
    printf("The Average value of odd integers: %d\n", addOddNum / totalOddNum);

    // if statements
    if (totalEvenNum > totalOddNum) {
        printf("Yowza, there were more evens!");
    }
    else if (totalOddNum > totalEvenNum) {
        printf("Sheesh, there were more odds!");
    }
    else
    {
        printf("It was a crazy tie!");
    }

    return 0;
}