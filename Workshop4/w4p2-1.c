/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Taehwa Hong
Student ID#: 132546227
Email      : thong14@myseneca.ca
Section    : IPC144 NAA

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{

    int appleNeed, orangeNeed, pearNeed, tomatoNeed, cabbageNeed;
    int picked;
    int shoppingRepeat;

    do
    {
        printf("Grocery Shopping\n"
            "================\n");

        do
        {
            printf("How many APPLES do you need? : ");
            scanf("%d", &appleNeed);

            if (appleNeed < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (!(appleNeed >= 0));
        putchar('\n');

        do
        {
            printf("How many ORANGE do you need? : ");
            scanf("%d", &orangeNeed);
            if (orangeNeed < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (!(orangeNeed >= 0));
        putchar('\n');

        do
        {
            printf("How many PEARS do you need? : ");
            scanf("%d", &pearNeed);
            if (pearNeed < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (!(pearNeed >= 0));
        putchar('\n');

        do
        {
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &tomatoNeed);
            if (tomatoNeed < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (!(tomatoNeed >= 0));
        putchar('\n');

        do
        {
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &cabbageNeed);
            if (cabbageNeed < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (!(cabbageNeed >= 0));
        putchar('\n');

        printf("--------------------------\n"
            "Time to pick the products!\n"
            "--------------------------\n\n");

        while (appleNeed != 0)
        {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &picked);

            if (picked > appleNeed)
            {
                printf("You picked too many... only %d more APPLE(S) are needed.\n", appleNeed);
            }
            else if (picked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else
            {
                appleNeed -= picked;
                if (appleNeed == 0)
                {
                    printf("Great, that's the apples done!\n\n");
                }
                else
                {
                    printf("Looks like we still need some APPLES...\n");
                }
            }
        }

        while (orangeNeed != 0)
        {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &picked);

            if (picked > orangeNeed)
            {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", orangeNeed);
            }
            else if (picked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else
            {
                orangeNeed -= picked;
                if (orangeNeed == 0)
                {
                    printf("Great, that's the oranges done!\n\n");
                }
                else
                {
                    printf("Looks like we still need some ORANGES...\n");
                }
            }
        }

        while (pearNeed != 0)
        {
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d", &picked);

            if (picked > pearNeed)
            {
                printf("You picked too many... only %d more PEAR(S) are needed.\n", pearNeed);
            }
            else if (picked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else
            {
                pearNeed -= picked;
                if (pearNeed == 0)
                {
                    printf("Great, that's the pears done!\n\n");
                }
                else
                {
                    printf("Looks like we still need some PEARS...\n");
                }
            }
        }

        while (tomatoNeed != 0)
        {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &picked);

            if (picked > tomatoNeed)
            {
                printf("You picked too many... only %d more TOMATO(S) are needed.\n", tomatoNeed);
            }
            else if (picked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else
            {
                tomatoNeed -= picked;
                if (tomatoNeed == 0)
                {
                    printf("Great, that's the tomatoes done!\n\n");
                }
                else
                {
                    printf("Looks like we still need some TOMATOES...\n");
                }
            }
        }

        while (cabbageNeed != 0)
        {
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &picked);

            if (picked > cabbageNeed)
            {
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", cabbageNeed);
            }
            else if (picked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else
            {
                cabbageNeed -= picked;
                if (cabbageNeed == 0)
                {
                    printf("Great, that's the cabbages done!\n\n");
                }
                else
                {
                    printf("Looks like we still need some CABBAGES...\n");
                }
            }
        }

        printf("All the items are picked!\n\n");

        printf("Do another shopping? (0=NO): ");
        scanf("%d", &shoppingRepeat);
        putchar('\n');
    } while (shoppingRepeat == 1);
    printf("Your tasks are done for today - enjoy your free time!\n");
    return 0;
}