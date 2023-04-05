/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  :  Taehwa Hong
Student ID#:  132546227
Email      :  thong14@myseneca.ca
Section    :  IPC 144

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';

    double SMALL, MEDIUM, LARGE;
    int Qty;

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &SMALL);

    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &MEDIUM);
    
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &LARGE);
    printf("\n");

    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n", SMALL);
    printf("MEDIUM : $%.2f\n", MEDIUM);
    printf("LARGE  : $%.2f\n\n", LARGE);

    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &Qty);
    printf("\n");

    int PatSubTotal = (int)((Qty * SMALL + 0.005) * 100);
    int PatTax = (int)(PatSubTotal * TAX + 0.005 * 100);
    int Total = PatSubTotal + PatTax;

    printf("Patty's shopping cart...\n");
    printf("Contains : %d shirts\n", Qty);
    printf("Sub-total: $%8.4lf\n", (double)PatSubTotal / 100);
    printf("Taxes    : $%8.4lf\n", (double)PatTax / 100);
    printf("Total    : $%8.4lf\n", (double)Total / 100);

    return 0;
}


