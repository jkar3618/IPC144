/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
Full Name  : Taehwa Hong
Student ID#: 132546227
Email      : thong14@myseneca.ca
Section    : IPC144 NAA

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int i, number;
    char type;

    printf("+----------------------+\n"
        "Loop application STARTED\n"
        "+----------------------+\n");

    do
    {
        printf("\nD = do/while | W = while | F = for | Q = quit\n"
            "Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &type, &number);

        if ((type == 'D' || type == 'W' || type == 'F') && (number > 2 && number < 21))
        {
            if (type == 'D')
            {
                i = 0;
                printf("DO-WHILE: ");
                do {
                    printf("D");
                    i++;
                } while (type == 'D' && i < number);
                putchar('\n');
            }
            else if (type == 'W')
            {
                i = 0;
                printf("WHILE   : ");
                while (type == 'W' && i < number)
                {
                    i++;
                    printf("W");
                }
                putchar('\n');
            }
            else if (type == 'F')
            {
                printf("FOR     : ");
                for (i = 0; i < number; i++)
                    printf("F");
                putchar('\n');
            }

        }
        else if ((type == 'D' || type == 'W' || type == 'F') && (number < 3 || number > 20))
        {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
        }
        else if (type == 'Q' && number != 0)
        {
            printf("ERROR: To quit, the number of iterations should be 0!\n");
        }
        else if ((!(type == 'D' || type == 'W' || type == 'F' || type == 'Q')) && (number >= 0 && number <= 20))
        {
            printf("ERROR: Invalid entered value(s)!\n");
        }
    } while (!(type == 'Q' && number == 0));

    printf("\n+--------------------+\n"
        "Loop application ENDED\n"
        "+--------------------+\n");
    
    return 0;
}