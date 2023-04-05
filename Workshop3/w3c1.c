//
// Expressions
// - Relational
// - Logical
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    double grade1, grade2;
    char letter1, letter2;

    printf("Enter grade1: ");
    scanf("%lf", &grade1);

    printf("Enter grade2: ");
    scanf("%lf", &grade2);

    printf("Is grade1 less than grade2? --> %d\n",
           grade1 < grade2);
    printf("Is grade1 not the same as grade2? --> %d\n",
           grade1 != grade2);
    // DeMorgan's Law:
    printf("Is grade1 not the same as grade2? --> %d\n",
           !(grade1 == grade2));

    printf("Enter letter1: ");
    scanf(" %c", &letter1);

    printf("Enter letter2: ");
    scanf(" %c", &letter2);

    printf("Is letter1 less than letter2? --> %d\n",
           letter1 < letter2);
    printf("Is letter1 not the same as letter2? --> %d\n",
           letter1 != letter2);
    // DeMorgan's Law:
    printf("Is letter1 not the same as letter2? --> %d\n",
           !(letter1 == letter2));

    printf("Is letter1 a letter and is letter2 a letter\n"
           "(case insensitive)? -->%d\n",
           ((letter1 >= 'A' && letter1 <= 'Z') || (letter1 >= 'a' && letter1 <= 'z')) &&
    //       ((letter2 >= 'A' && letter2 <= 'Z') || (letter2 >= 'a' && letter2 <= 'z')));

    // Vowels: a, e, i, o, u
    printf("Is grade1 greater than half of grade2 and\n"
           "is either letter1 a vowel or letter2 a number"
           "(case insensitive)? -->%d",
           (grade1 > (grade2 / 2)) &&
           ((letter1 == 'a' || letter1 == 'e' || letter1 == 'i' || letter1 == 'o' ||
             letter1 == 'u' || letter1 == 'A' || letter1 == 'E' || letter1 == 'I' ||
             letter1 == 'O' || letter1 == 'U') ||
            (letter2 >= '0' && letter2 <= '9')));

    return 0;
}