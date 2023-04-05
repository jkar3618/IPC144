
/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
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
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;

    //Product Data
    char coffeeType1, coffeeType2, coffeeType3;
    int weight1, weight2, weight3;
    char suggestCream1, suggestCream2, suggestCream3;

    //Customer Preference
    char strength, likeCream;
    int dailyServing;


    printf("Take a Break - Coffee Shop\n"
        "==========================\n\n");

    printf("Enter the coffee product information being sold today...\n\n");

    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffeeType1);
    printf("Bag weight (g): ");
    scanf("%d", &weight1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &suggestCream1);
    printf("\n");

    printf("COFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffeeType2);
    printf("Bag weight (g): ");
    scanf("%d", &weight2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &suggestCream2);
    printf("\n");

    printf("COFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffeeType3);
    printf("Bag weight (g): ");
    scanf(" %d", &weight3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &suggestCream3);
    printf("\n");

    printf("---+------------------------+---------------+-------+\n"
        "   |    Coffee              |   Packaged    | Best  |\n"
        "   |     Type               |  Bag Weight   | Served|\n"
        "   +------------------------+---------------+ With  |\n"
        "ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n"
        "---+------------------------+---------------+-------|\n");
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
        (coffeeType1 == 'l' || coffeeType1 == 'L'), (coffeeType3 == 'm' && coffeeType3 == 'M'), (coffeeType2 == 'r' && coffeeType2 == 'R'),
        weight1, weight1 / GRAMS_IN_LBS, (suggestCream1 == 'y' || suggestCream1 == 'Y'));

    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
        (coffeeType1 == 'l' && coffeeType1 == 'L'), (coffeeType3 == 'm' && coffeeType3 == 'M'), (coffeeType2 == 'r' || coffeeType2 == 'R'),
        weight2, weight2 / GRAMS_IN_LBS, (suggestCream2 == 'n' && suggestCream2 == 'N'));

    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n\n",
        (coffeeType1 == 'l' && coffeeType1 == 'L'), (coffeeType3 == 'm' || coffeeType3 == 'M'), (coffeeType2 == 'r' && coffeeType2 == 'R'),
        weight3, weight3 / GRAMS_IN_LBS, (suggestCream3 == 'n' && suggestCream3 == 'N'));

    printf("Enter how you like your coffee...\n\n");

    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &likeCream);
    printf("Typical number of daily servings: ");
    scanf("%d", &dailyServing);
    printf("\n");

    printf("The below table shows how your preferences align to the available products:\n\n");

    printf("--------------------+-------------+-------+\n"
        "  |     Coffee      |  Packaged   | With  |\n"
        "ID|      Type       | Bag Weight  | Cream |\n"
        "--+-----------------+-------------+-------+\n");
    printf(" 1|      % d         |     % d      |  % d   |\n", 
        (coffeeType1 == 'l') || (coffeeType1 == 'L'), ((dailyServing > 0 && dailyServing < 5) || weight1 == 250), (suggestCream1 == 'y') || (suggestCream1 == 'Y'));
    
    printf(" 2|      % d         |     % d      |  % d   |\n", 
        (coffeeType2 == 'r') && (coffeeType2 == 'R'), ((dailyServing > 4 && dailyServing < 10) && weight2 == 500), (suggestCream2 == 'n') && (suggestCream2 == 'N'));
    
    printf(" 3|      % d         |     % d      |  % d   |\n\n", 
        (coffeeType3 == 'm') && (coffeeType3 == 'M'), ((dailyServing > 10) && weight3 == 1000), (suggestCream3 == 'n') && (suggestCream3 == 'N'));

    printf("Enter how you like your coffee...\n\n");

    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &likeCream);
    printf("Typical number of daily servings: ");
    scanf("%d", &dailyServing);
    printf("\n");

    printf("The below table shows how your preferences align to the available products:\n\n");

    printf("--------------------+-------------+-------+\n"
        "  |     Coffee      |  Packaged   | With  |\n"
        "ID|      Type       | Bag Weight  | Cream |\n"
        "--+-----------------+-------------+-------+\n");
    printf(" 1|      % d         |     % d      |  % d   |\n",
        (coffeeType1 == 'l') && (coffeeType1 == 'L'), ((dailyServing > 0 && dailyServing < 5) && weight1 == 250), (suggestCream1 == 'y') && (suggestCream1 == 'Y'));
    
    printf(" 2|      % d         |     % d      |  % d   |\n",
        (coffeeType2 == 'r') && (coffeeType2 == 'R'), ((dailyServing > 4 && dailyServing < 10) && weight2 == 500), (suggestCream2 == 'n') || (suggestCream2 == 'N'));
    
    printf(" 3|      % d         |     % d      |  % d   |\n\n",
        (coffeeType3 == 'm') || (coffeeType3 == 'M'), ((dailyServing > 10) || (weight3 == 1000)), (suggestCream3 == 'n') || (suggestCream3 == 'N')); 

    printf("Hope you found a product that suits your likes!\n");


    return 0;


}
