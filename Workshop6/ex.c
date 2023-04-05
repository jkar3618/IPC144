//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//#define SZ 3
//
//int main(void)
//{
//	int i, one = 0, two = 0, total = 0;
//	printf("Enter two whole numbers separated by a space: ");//user enters 56 2
//	total = scanf("%d %d", &one, &two);
//	for (i = 0; i < SZ; i++)
//	{
//		if (i % two)
//		{
//		total = two + one / total;
//		}
//		else
//		{
//		total += one * two;
//		}
//	}
//	printf("total is equal to %d\n", total);
//	return 0;
//}

#include <stdio.h>

#define MAX_ITEMS 3
#define MAX_RATE1 100
#define MAX_RATE2 200
#define MAX_RATE3 400

int main(void)
{
    int empCategory[MAX_ITEMS] = { 500,   75,    200 };
    int empSalary[MAX_ITEMS] = { 10500, 50000, 100000 };
    double bonusRate[MAX_ITEMS] = { 0.10,  0.25,   0.50 };
    int i, rate;
    double totalBonus = 0.0;

    for (i = 0; i < MAX_ITEMS; i++)
    {
        if (empCategory[i] < MAX_RATE1 + 1)
        {
            rate = 0;
        }
        else if (empCategory[i] < MAX_RATE2 + 1)
        {
            rate = 1;
        }
        else
        {
            rate = 2;
        }

        printf("Rate: %d\n", rate);

        if (empSalary[i] % 10000)
        {
            rate++;
            printf("Rate changed to: %d\n", rate);
        }

        switch (rate)
        {
        case 0:
            totalBonus += 100.0;
        case 1:
            totalBonus -= 100.0;
        case 2:
            totalBonus += empSalary[i] * bonusRate[rate];
            break;
        default:
            totalBonus += empSalary[i] * bonusRate[rate - 1] + 1000.0;
        }
        printf("Total Bonus [%d]: %.2lf\n", i, totalBonus);
    }
    totalBonus > 50000.0 ?
        printf("Business is broke!\n") :
        printf("It was a good year!\n");

    return 0;
}