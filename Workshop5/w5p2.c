/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P2)
Full Name  : Taehwa Hong
Student ID#: 132546227
Email      : thong14@myseneca.ca
Section    : IPC144NAA

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main(void)
{
    int year, month, day;
    const int JAN = 1, DEC = 12;
    double morningRate, eveningRate;
    double morningSum = 0, eveningSum = 0;
    int validValue;

    printf("General Well-being Log\n"
        "======================\n");

    do
    {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);

        if (year < MIN_YEAR || year > MAX_YEAR) // Error message about year
        {
            printf("   ERROR: The year must be between %d and %d inclusive\n", MIN_YEAR, MAX_YEAR);
        }
        if (month < JAN || month > DEC) // Error message about month
        {
            printf("   ERROR: Jan.(%d) - Dec.(%d)\n", JAN, DEC);
        }

    } while ((year < MIN_YEAR || year > MAX_YEAR) || (month < JAN || month > DEC));

    printf("\n*** Log date set! ***\n\n");

    for (day = 0; day < LOG_DAYS; day++)
    {
        // selections to print month to character
        if (month == 1)
        {
            printf("%d-JAN-%02d\n", year, day + 1);
        }
        else if (month == 2)
        {
            printf("%d-FEB-%02d\n", year, day + 1);
        }
        else if (month == 3)
        {
            printf("%d-MAR-%02d\n", year, day + 1);
        }
        else if (month == 4)
        {
            printf("%d-APR-%02d\n", year, day + 1);
        }
        else if (month == 5)
        {
            printf("%d-MAY-%02d\n", year, day + 1);
        }
        else if (month == 6)
        {
            printf("%d-JUN-%02d\n", year, day + 1);
        }
        else if (month == 7)
        {
            printf("%d-JUL-%02d\n", year, day + 1);
        }
        else if (month == 8)
        {
            printf("%d-AUG-%02d\n", year, day + 1);
        }
        else if (month == 9)
        {
            printf("%d-SEP-%02d\n", year, day + 1);
        }
        else if (month == 10)
        {
            printf("%d-OCT-%02d\n", year, day + 1);
        }
        else if (month == 11)
        {
            printf("%d-NOV-%02d\n", year, day + 1);
        }
        else
        {
            printf("%d-DEC-%02d\n", year, day + 1);
        }

        do
        {
            validValue = 1;
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningRate);

            if (morningRate < 0.0 || morningRate > 5.0)
            {
                validValue = 0;
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }
        } while (!validValue);

        morningSum += morningRate;

        do
        {
            validValue = 1;

            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningRate);

            if (eveningRate < 0.0 || eveningRate > 5.0)
            {
                validValue = 0;
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }
        } while (!validValue);

        eveningSum += eveningRate;

        putchar('\n');
    }

    printf("Summary\n"
           "=======\n");
    printf("Morning total rating: %.3lf\n"
           "Evening total rating:  %.3lf\n", morningSum, eveningSum);
    printf("----------------------------\n");
    printf("Overall total rating: %.3lf\n\n", morningSum + eveningSum);

    printf("Average morning rating:  %.1lf\n"
           "Average evening rating:  %.1lf\n", morningSum / LOG_DAYS, eveningSum / LOG_DAYS);
    printf("----------------------------\n");
    printf("Average overall rating:  %.1lf\n", (morningSum / LOG_DAYS + eveningSum / LOG_DAYS) / 2);

    return 0;
}