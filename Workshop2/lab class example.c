//
// Workshop #2
// - Intro./hints
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX_RATE = 0.13;
    double balance; // = 12.55;
    double balanceOwing;
    int remainder;
    int coins;

    printf("Enter Balance: $");
    scanf("%lf", &balance);
    remainder = (int)((balance + 0.005) * 100);

    printf("Balance: $%.2lf\n", balance);
    printf("cents  : %d\n", remainder);
    printf("cents  : $%.2lf\n", remainder / 100.0);

    // How many quarters? (0.25)
    coins = remainder / 25;
    remainder = remainder % 25;

    printf("Quarters: %d\n", coins);
    //remainder = remainder - (coins * 25);
    printf("Remainder: %d\n", remainder);
    printf("Remainder: %.4lf\n", (double)remainder / 100);

    return 0;
}