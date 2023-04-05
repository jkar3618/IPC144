//
//  Week #5
//  Topics:   Iteration
//  Exercise: Challenge 1
//

// VISUAL STUDIO ONLY: suppress security warning about scanf (and other) input functions
#define _CRT_SECURE_NO_WARNINGS

// SYSTEM Library Includes
#include <stdio.h>

int main(void)
{
    int loopCount;
    int userInput;

    printf("For Iteration\n"
        "=============\n");
    for (loopCount = 0; loopCount < 3; loopCount++)
    {
        printf("Keep looping (positive #-YES | zero or negative #=NO): ");
        scanf("%d", &userInput);
        
        if ((userInput % 2) > 0)
        {
            printf("That number is EVEN!\n");
        }
        else
        {
            ((userInput % 2) <= 0);
            printf("That number is ODD!\n");
        }
    }

    printf("You looped 3 times!\n");

    return 0;
}