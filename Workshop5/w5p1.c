/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P1)
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


int main(void)
{

    int year, month;
    int JAN = 1, DEC = 12;
    int val;

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
        
        printf("Log starting date: %d-", year);

        // selections to print month to character
                if (month == 1)
                {
                    printf("JAN-01\n");
                }
                else if (month == 2)
                {
                    printf("FEB-01\n");
                }
                else if (month == 3)
                {
                    printf("MAR-01\n");
                }
                else if (month == 4)
                {
                    printf("APR-01\n");
                }
                else if (month == 5)
                {
                    printf("MAY-01\n");
                }
                else if (month == 6)
                {
                    printf("JUN-01\n");
                }
                else if (month == 7)
                {
                    printf("JUL-01\n");
                }
                else if (month == 8)
                {
                    printf("AUG-01\n");
                }
                else if (month == 9)
                {
                    printf("SEP-01\n");
                }
                else if (month == 10)
                {
                    printf("OCT-01\n");
                }
                else if (month == 11)
                {
                    printf("NOV-01\n");
                }
                else 
                {
                    printf("DEC-01\n");
                }

        return 0;
}