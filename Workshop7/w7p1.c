/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P1)
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

#define MIN_LIVES 1
#define MAX_LIVES 10

#define MIN_LENGTH 10
#define MAX_LENGTH 70
#define MULTIPLE 5

#define MAX_MOVE 35

    struct playerInfo
    {
        char characterSymbol;
        int lives;
        int length;
        int treasure[MAX_LENGTH];
    };

    struct gameInfo
    {
        int limitMove;
        int minMove;
        int length;
        int bomb[MAX_LENGTH];
    };


int main(void)
{
    struct playerInfo playerInfo = { 0 };
    struct gameInfo gameInfo = { 0 };
    

    int i, j;

    int validvalue;


    printf("================================\n"
           "          Treasure Hunt!        \n"
           "================================\n\n");

    // Player Configuration
    printf("PLAYER Configuration\n"
           "--------------------\n");
    printf("Enter a single character to represent the player: ");
    scanf(" %c", &playerInfo.characterSymbol);
    
    do
    {
        validvalue = 1;
        printf("Set the number of lives: ");
        scanf("%d", &playerInfo.lives);
    
        if (playerInfo.lives < MIN_LIVES || playerInfo.lives > MAX_LIVES)
        {
            validvalue = 0;
            printf("     Must be between %d and %d!\n", MIN_LIVES, MAX_LIVES);
        }
        else
        {
            printf("Player configuration set-up is complete\n\n");
        }
    } while (!validvalue);


    // Game Configuration
    printf("GAME Configuration\n"
        "------------------\n");

    do // iteration for length
    {
        validvalue = 1;
        printf("Set the path length (a multiple of %d between %d-%d): ", MULTIPLE, MIN_LENGTH, MAX_LENGTH);
        scanf("%d", &playerInfo.length);

        if (playerInfo.length < MIN_LENGTH || playerInfo.length > MAX_LENGTH || playerInfo.length % MULTIPLE)
        {
            validvalue = 0;
            printf("     Must be a multiple of %d and between %d-%d!!!\n", MULTIPLE, MIN_LIVES, MAX_LIVES);
        }
    } while (!validvalue);

    do // iteration for limitation of move
    {
        gameInfo.minMove = playerInfo.lives;
            validvalue = 1;
            printf("Set the limit for number of moves allowed: ");
            scanf("%d", &gameInfo.limitMove);
            if (gameInfo.limitMove < gameInfo.minMove || gameInfo.limitMove > (int)(MAX_MOVE * 0.75))
            {
                validvalue = 0;
                printf("    Value must be between %d and %d\n", playerInfo.lives, (int)(MAX_MOVE * 0.75));
            }
    } while (!validvalue);
    putchar('\n');

    // Bomb Placement
    printf("BOMB Placement\n"
           "--------------\n");
    printf("Enter the bomb positions in sets of %d where a value\n"
           "of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n", MULTIPLE);
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", playerInfo.length);

    for (i = 0; i < playerInfo.length; i += MULTIPLE)
    {
        printf("   Positions [%2d-%2d]: ", i + 1, i + MULTIPLE);
        for (j = i; j < MULTIPLE + i; j++)
        {
            scanf("%d", &gameInfo.bomb[j]);
        }
    }

    printf("BOMB placement set\n\n");

    // Treasure Placement
    printf("TRESURE Placement\n"
           "-----------------\n");
    printf("Enter the treasure placemnets in sets of %d where a value\n"
           "of 1=TREASURE, and 0=NO TREASURE, Space-delimit your input.\n", MULTIPLE);
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", playerInfo.length);
    
    for (i = 0; i < playerInfo.length; i += MULTIPLE)
    {
        printf("   Positions [%2d-%2d]: ", i + 1, i + MULTIPLE);
        for (j = i; j < MULTIPLE + i; j++)
        {
            scanf("%d", &playerInfo.treasure[j]);
        }
    }

    printf("TREASURE placement set\n\n");

    printf("GAME configuration set-up is complete...\n\n");

    printf("------------------------------------\n"
           "TREASURE HUNT Configuration Settings\n"
           "------------------------------------\n");

    printf("Player:\n");
    printf("   Symbol    : %c\n"
           "   Lives     : %d\n", playerInfo.characterSymbol, playerInfo.lives);
    printf("   Treasure  : [ready for gameplay]\n"
           "   History   : [ready for gameplay]\n\n");

    printf("Game:\n");
    printf("   Path Length: %d\n", playerInfo.length);
    
    printf("   Bombs      : ");
    for (i = 0; i < playerInfo.length; i++)
    {
        printf("%d", gameInfo.bomb[i]);
    }
    putchar('\n');

    printf("   Treasure   : ");
    for (i = 0; i < playerInfo.length; i++)
    {
        printf("%d", playerInfo.treasure[i]);
    }
    putchar('\n');

    printf("\n====================================\n"
           "~ Get ready to play TREASURE HUNT! ~\n"
           "====================================\n");

    return 0;
}