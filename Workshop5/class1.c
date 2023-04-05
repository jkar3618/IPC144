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

    // for loop 5 times:
    userInput = 1;
    for (loopCount = 0; loopCount < 5 && userInput > 0; loopCount++)
    {
        // promping for input
        printf("Keep looping (positive #-YES | zero or negative #=NO): ");

        // storing the input
        scanf("%d", &userInput);
        if (userInput > 0)
        {
            printf(" That number is ");
            userInput % 2 == 0 ? printf("EVEN!\n") : printf("ODD!\n");

            //if (userInput % 2 == 0)
            //{
            //    printf("That number is EVEN!\n");
            //}
            //else
            //{
            //    printf("That number is ODD!\n");
            /*}*/
        }
        // Even or Odd?
    }

    printf(" You looped %d times!\n", loopCount);

    return 0;
}