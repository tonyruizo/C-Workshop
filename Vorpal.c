#include <stdio.h>

// Vorpal function definition
double vorpal(double num1, double num2);

int main(void)
{
    // Variables
    double num1, num2, finalResult;

    // Ask users to input two numbers to calculate
    printf("Enter first number: \n");
    scanf("%lf", &num1);

    printf("Enter second number: \n");
    scanf("%lf", &num2);

    // Vorpal Function in use, and assigned to finalResult variable
    finalResult = vorpal(num1, num2);

    // Display result in two decimal places
    printf("The result is %.2lf \n", finalResult);

    return 0;
}

// Vorpal Function declaration
double vorpal(double num1, double num2)
{
    double result;

    // Calculation, add two inputs and divide by 2
    result = (num1 + num2) / 2;

    return result;
}

