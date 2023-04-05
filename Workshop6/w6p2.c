/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P2)
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

#define MIN_ITEMS 1
#define MAX_ITEMS 10

int main(void)
{
    const double minCost = 100.00;
    const double minIncome = 500.00;
    const double maxIncome = 400000.00;

    double income;
    int quantity;

    // Arraies for Items
    int priority[MAX_ITEMS] = { 0 };
    char finance[MAX_ITEMS] = { 0 };
    double itemCost[MAX_ITEMS] = { 0 };

    // Finanace
    int year;
    int month;

    // Flag
    int validValue, i;

    int forecast;
    int filterPriority;
    double totalSum = 0;
    double priority1Sum = 0, priority2Sum = 0, priority3Sum = 0;

    printf("+--------------------------+\n"
           "+   Wish List Forecaster   |\n"
           "+--------------------------+\n\n");

    // Iteration for NET income
    do
    {
        validValue = 1;

        printf("Enter your monthly NET income: $");
        scanf("%lf", &income);

        if (income < minIncome)
        {
            validValue = 0;
            printf("ERROR: You must have a consistent monthly income of at least $%.2lf\n", minIncome);
        }
        if (income > maxIncome)
        {
            validValue = 0;
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2lf\n", maxIncome);
        }
        putchar('\n');
    } while (!validValue);

    //Iteration for Quantity of Item
    do
    {
        validValue = 1;

        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &quantity);

        if (quantity < MIN_ITEMS || quantity > MAX_ITEMS)
        {
            validValue = 0;
            printf("ERROR: List is restricted to between 1 and 10 items.\n\n");
        }
    } while (!validValue);

    putchar('\n');

    // Iteration for Item Details
    for (i = 0; i < quantity; i++)
    {
        printf("Item-%d Details:\n", i + 1);

        do // Nested Iterarion for Item Cost
        {
            validValue = 1;

            printf("   Item cost: $");
            scanf("%lf", &itemCost[i]);

            if (itemCost[i] < minCost)
            {
                validValue = 0;
                printf("      ERROR: Cost must be at least $%.2f\n", minCost);
            }
        } while (!validValue);

    totalSum += itemCost[i];

            

        do // Nested Iterarion for Priority
        {
            validValue = 1;

            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &priority[i]);

            if (priority[i] < 1 || priority[i] > 3)
            {
                validValue = 0;
                printf("      ERROR: Value must be between 1 and 3\n");
            }

            if (priority[i] == 1)
            {
                priority1Sum += itemCost[i];
            }
            else if (priority[i] == 2)
            {
                priority2Sum += itemCost[i];
            }
            else if(priority[i] == 3)
            {
                priority3Sum += itemCost[i];
            }

        } while (!validValue);

  
        do // Nested Iterarion for Financing Option
        {
            validValue = 1;

            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &finance[i]);

            if (!(finance[i] == 'y' || finance[i] == 'n'))
            {
                validValue = 0;
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            }
        } while (!validValue);

        putchar('\n');
    }
    
    // Tabular Data
    printf("Item Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");

    for (i = 0; i < quantity; i++)
    {
        printf("%3d  %5d    %5c    %11.2lf\n", i + 1, priority[i], finance[i], itemCost[i]);
    }
    printf("---- -------- -------- -----------\n");
    printf("                      $ %.2lf\n\n", totalSum);

    // Iteration for filter
    do
    {
        validValue = 1;

        printf("How do you want to forecast your wish list?\n");
        printf(" 1. All items (no filter)\n"
               " 2. By priority\n"
               " 0. Quit/Exit\n");
        printf("Selection: ");
        scanf("%d", &forecast);

        if ((forecast < 0 || forecast > 2))
        {
            validValue = 0;

            printf("\nERROR: Invalid menu selection.\n\n");
        }

        // Iteration for All items
        if (forecast == 1)
        {
            validValue = 0;

            year = totalSum / income / 12;
            month = (int)(totalSum / income) % 12;

            if ((totalSum / income) - (int)(totalSum / income) > 0)
            {
                month = month + 1;
            }

            printf("\n====================================================\n");
            printf("Filter:   All items\n"
                   "Amount:   $%1.2lf\n", totalSum);
            printf("Forecast: %d years, %d months\n", year, month);

            for (i = 0; i < finance[i]; i++)
            {
                if (finance[i] == 'y') 
                {
                    validValue = 1;
                }
            }
            if (validValue == 1)
            {
                printf("NOTE: Financing options are available on some items.\n"
                       "      You can likely reduce the estimated months.\n");
                validValue = 0;
            }
            printf("====================================================\n\n");
        }

        // Iteration for priority
        if (forecast == 2)
        {
            validValue = 0;

            printf("\nWhat priority do you want to filter by? [1-3]: ");
            scanf("%d", &filterPriority);

            if (filterPriority == 1)
            {
                year = priority1Sum / income / 12;
                month = (int)(priority1Sum / income) % 12;
                if ((priority1Sum / income) - (int)(priority1Sum / income) > 0)
                {
                    month = month + 1;
                }
           
                printf("\n====================================================\n");
                printf("Filter:   by priority (1)\n");
                printf("Amount:   $%1.2lf\n", priority1Sum);
                printf("Forecast: %d years, %d months\n", year, month);
                
                for (i = 0; i < finance[i]; i++)
                {
                    if (priority[i] == 1 && finance[i] == 'y')
                    {
                        validValue = 1;
                    }
                }

                if (validValue == 1)
                {
                    printf("NOTE: Financing options are available on some items.\n"
                           "      You can likely reduce the estimated months.\n");
                    validValue = 0;
                }
                printf("====================================================\n\n");
            }
            
            else if (filterPriority == 2)
            {
                validValue = 0;

                year = priority2Sum / income / 12;
                month = (int)(priority2Sum / income) % 12;

                if ((priority2Sum / income) - (int)(priority2Sum / income) > 0)
                {
                    month = month + 1;
                }

                printf("\n====================================================\n");
                printf("Filter:   by priority (2)\n");
                printf("Amount:   $%1.2lf\n", priority2Sum);
                printf("Forecast: %d years, %d months\n", year, month);

                for (i = 0; i < finance[i]; i++)
                {
                    if (priority[i] == 2 && finance[i] == 'y')
                    {
                        validValue = 1;
                    }
                }

                if (validValue == 1)
                {
                    printf("NOTE: Financing options are available on some items.\n"
                           "      You can likely reduce the estimated months.\n");
                    validValue = 0;
                }
                printf("====================================================\n\n");
            }
            else if(filterPriority == 3)
            {
                validValue = 0;

                year = priority3Sum / income / 12;
                month = (int)(priority3Sum / income) % 12;

                if ((priority3Sum / income) - (int)(priority3Sum / income) > 0)
                {
                    month = month + 1;
                }

                printf("\n====================================================\n");
                printf("Filter:   by priority (3)\n");
                printf("Amount:   $%1.2lf\n", priority3Sum);
                printf("Forecast: %d years, %d months\n", year, month);

                for (i = 0; i < finance[i]; i++)
                {
                    if (priority[i] == 3 && finance[i] == 'y')
                    {
                        validValue = 1;
                    }
                }

                if (validValue == 1)
                {
                    printf("NOTE: Financing options are available on some items.\n"
                           "      You can likely reduce the estimated months.\n");
                    validValue = 0; 
                }
                printf("====================================================\n\n");
            }
        }
    } while (!validValue);

    printf("\nBest of luck in all your future endeavours!\n");


    return 0;
}


