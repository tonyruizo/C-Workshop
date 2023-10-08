#include <stdio.h>

// Symbolic Constants
#define ROWS 6
#define COLS 7

int main(void) {
    // Variables for loop
    int i, j;

    // Outer loop iterating the rows
    for (i = 0; i < ROWS; i++) {
        // Inner loop iterating the columns
        for (j = 0; j < COLS - i; j++) {
            printf("4");
        }
        // Move to next line
        printf("\n");
    }

    return 0;
}