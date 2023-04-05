/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
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

#define MIN_INCOME 500.00
#define MAX_INCOME 400000.00
#define MIN_ITEMS 1
#define MAX_ITEMS 10
#define ITEMS 3

int main(void)
{
    const double minCost = 100.00;
    int validValue, i;
    double income;
    int wishList;
    double totalSum = 0;

    //Arraies for Items
    int priority[MAX_ITEMS] = {0};
    char finance[MAX_ITEMS] = {0};
    double itemCost[MAX_ITEMS] = {0};

    printf("+--------------------------+\n"
           "+   Wish List Forecaster   |\n"
           "+--------------------------+\n\n");

    // Iteration for NET income
    do
    {
        validValue = 1;

        printf("Enter your monthly NET income: $");
        scanf("%lf", &income);

        if(income < MIN_INCOME)
        {
            validValue = 0;
            printf("ERROR: You must have a consistent monthly income of at least $%.2lf\n", MIN_INCOME);
        }
        if (income > MAX_INCOME)
        {
            validValue = 0;
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2lf\n", MAX_INCOME);
        }
        putchar('\n');
    } while (!validValue);
    
    //Iteration for Quantity of Item
    do
    {
        validValue = 1;

        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &wishList);
        
        if (wishList < MIN_ITEMS || wishList > MAX_ITEMS)
        {
            validValue = 0;
            printf("ERROR: List is restricted to between 1 and 10 items.\n\n");
        }
    } while (!validValue);

    putchar('\n');

    // Iteration for Item Details
    for (i = 0; i < ITEMS; i++)
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

    for (i = 0; i < ITEMS; i++)
    {
        printf("%3d  %5d    %5c    %11.2lf\n", i + 1, priority[i], finance[i], itemCost[i]);
    }
    printf("---- -------- -------- -----------\n");
    printf("                      $ %.2lf\n\n", totalSum);

    printf("Best of luck in all your future endeavours!\n\n");

    return 0;
}