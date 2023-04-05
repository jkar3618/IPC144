/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  : Taehwa Hong
Student ID#: 132546227
Email      : thong14@myseneca.ca
Section    : IPC144 NAA

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>



int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;

    int pd1ID = 111, pd2ID = 222, pd3ID = 111;
    double pd1Price = 111.4900, pd2Price = 222.9900, pd3Price = 334.4900;
    char pd1Taxed = 'Y', pd2Taxed = 'N', pd3Taxed = 'N';

    printf("Product Information\n"
        "===================\n");
    printf("Product-1 (ID:%d)\n", pd1ID);
    printf("  Taxed: %c\n", pd1Taxed);
    printf("  Price: $%.4lf\n\n", pd1Price);

    printf("Product-2 (ID:%d)\n", pd2ID);
    printf("  Taxed: %c\n", pd2Taxed);
    printf("  Price: $%.4lf\n\n", pd2Price);

    printf("Product-3 (ID:%d)\n", pd3ID);
    printf("  Taxed: %c\n", pd3Taxed);
    printf("  Price: $%.4lf\n\n", pd3Price);

    printf("The average of all prices is: $%.4lf\n\n", (pd1Price + pd2Price + pd3Price) / 3);

    printf("About Relational and Logical Expressions!\n"
        "========================================\n"
        "1. These expressions evaluate to TRUE or FALSE\n"
        "2. FALSE: is always represented by integer value 0\n"
        "3. TRUE : is represented by any integer value other than 0\n\n");

    printf("Some Data Analysis...\n"
        "=====================\n");
    printf("1. Is product 1 taxable? -> %d\n\n", pd1Taxed >= 0);
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", (pd2Taxed & pd3Taxed) >= 0);
    printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n\n", testValue, pd3Price < testValue);
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", pd3Price > (pd1Price + pd2Price));
    printf("5. Is the price of product 1 equal to or more than the price difference\n"
        "   of product 3 LESS product 2? ->  %d (price difference: $%.2lf)\n\n", pd1Price >= (pd3Price - pd2Price), (pd3Price - pd2Price));
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", pd2Price >= (pd1Price + pd2Price + pd3Price) / 3);
    printf("7. Based on product ID, product 1 is unique -> %d\n\n", (pd1ID == pd2ID) && (pd1ID == pd3ID));
    printf("8. Based on product ID, product 2 is unique -> %d\n\n", (pd2ID == pd1ID) == (pd2ID == pd3ID));
    printf("9. Based on product ID, product 3 is unique -> %d\n\n", !(pd3ID || pd2ID) || !(pd3ID || pd1ID));


    return 0;
}