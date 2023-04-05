//
// LOGIC
// - Selection, iteration
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // variables
    int maxFor, maxWhile, maxDoWhile;
    int repeatAgain, count;
    char symbol;
    // Execute at least once...
    do {

        // prompt
        printf("Enter loop counts (for,while,do/while)\n"
            " and the character to display\n"
            "(example: 5 3 2 *): ");

        // input
        scanf("%d %d %d %c", &maxFor, &maxWhile,
            &maxDoWhile, &symbol);

        putchar('\n');
        printf("maxFor: %d maxWhile: %d maxDoWhile: %d symbol: %c\n\n",
            maxFor, maxWhile, maxDoWhile, symbol);

        // do stuff.... (decisions)....
        if (maxFor > 0)
        {
            printf("For loop...\n");
            // For: loop
            //printf("FOR loop goes here...\n");
            for (count = 0; count < maxFor; count++)
            {
                //printf("%c", symbol);
                putchar(symbol);
            }
            printf("\n");
        }
        else if (maxWhile > 0)
        {
            printf("While loop...\n");
            count = 0;
            while (count < maxWhile)
            {
                // While: loop
                //printf("%c", symbol);
                putchar(symbol);
                count++;
            }
            putchar('\n');
        }
        else if (maxDoWhile > 0)
        {
            printf("Do/While loop...\n");

            // Do / While: loop
            count = 0;
            do {
                // While: loop
                //printf("%c", symbol);
                putchar(symbol);
                count++;
            } while (count < maxDoWhile);

            putchar('\n');
        }
        else
        {
            printf("MORON!!!  You didn't enter any positive loop counts!\n");
        }

        // prompt to go again...
        printf("Do it again? (0=quit): ");
        scanf("%d", &repeatAgain);
    } while (repeatAgain);

    return 0;
}