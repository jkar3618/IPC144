/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #7 (P2)
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

#define MAX_MOVE 20

struct playerInfo
{
	char characterSymbol;
	int lives;
	int findedTreasure;
	int move;
};

struct gameInfo
{
	int limitMove;
	int minimumMove;
	int length;
	int treasure[MAX_LENGTH];
	int bomb[MAX_LENGTH];
	int history[MAX_LENGTH];
	char board[MAX_LENGTH];
};


int main(void)
{
	struct playerInfo playerInfo = { 0 };
	struct gameInfo gameInfo = { 0 };


	int i, j;
	int validvalue;



	printf("================================\n"
		   "         Treasure Hunt!\n"
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
		scanf("%d", &gameInfo.length);

		if (gameInfo.length < MIN_LENGTH || gameInfo.length > MAX_LENGTH || gameInfo.length % MULTIPLE)
		{
			validvalue = 0;
			printf("     Must be a multiple of %d and between %d-%d!!!\n", MULTIPLE, MIN_LENGTH, MAX_LENGTH);
		}
		else
		{
			for (i = 0; i < gameInfo.length; i++)
			{
				gameInfo.history[i] = 0;
			}
		}
	} while (!validvalue);

	do // iteration for limitation of move
	{
		gameInfo.minimumMove = playerInfo.lives;
		validvalue = 1;
		printf("Set the limit for number of moves allowed: ");
		scanf("%d", &gameInfo.limitMove);
		if (gameInfo.limitMove < gameInfo.minimumMove || gameInfo.limitMove >(int)(MAX_MOVE * 0.75))
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
	printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", gameInfo.length);

	for (i = 0; i < gameInfo.length; i += MULTIPLE)
	{
		printf("   Positions [%2d-%2d]: ", i + 1, i + MULTIPLE);
		for (j = i; j < MULTIPLE + i; j++)
		{
			scanf("%d", &gameInfo.bomb[j]);
		}
	}

	printf("BOMB placement set\n\n");

	// Treasure Placement
	printf("TREASURE Placement\n"
		   "------------------\n");
	printf("Enter the treasure placements in sets of %d where a value\n"
		"of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n", MULTIPLE);
	printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", gameInfo.length);

	for (i = 0; i < gameInfo.length; i += MULTIPLE)
	{
		printf("   Positions [%2d-%2d]: ", i + 1, i + MULTIPLE);
		for (j = i; j < MULTIPLE + i; j++)
		{
			scanf("%d", &gameInfo.treasure[j]);
		}
	}

	printf("TREASURE placement set\n\n");

	printf("GAME configuration set-up is complete...\n\n");

	// Summary of the Game & Player Info
	printf("------------------------------------\n"
		"TREASURE HUNT Configuration Settings\n"
		"------------------------------------\n");

	printf("Player:\n");
	printf("   Symbol     : %c\n"
		   "   Lives      : %d\n", playerInfo.characterSymbol, playerInfo.lives);
	printf("   Treasure   : [ready for gameplay]\n"
		   "   History    : [ready for gameplay]\n\n");

	printf("Game:\n");
	printf("   Path Length: %d\n", gameInfo.length);

	printf("   Bombs      : ");
	for (i = 0; i < gameInfo.length; i++) // Bomb placement loop
	{
		printf("%d", gameInfo.bomb[i]);
	}
	putchar('\n');

	printf("   Treasure   : ");
	for (i = 0; i < gameInfo.length; i++) // Treasure placement loop
	{
		printf("%d", gameInfo.treasure[i]);
	}
	putchar('\n');

	printf("\n====================================\n"
		"~ Get ready to play TREASURE HUNT! ~\n"
		"====================================\n\n");
	// loop for map
	for (i = 0; i < playerInfo.move - 1; i++)
	{
		printf(" ");
	}

	if (!(playerInfo.move == 0))
	{
		printf("%c\n", playerInfo.characterSymbol);
	}

	printf("  ");
	for (i = 0; i < gameInfo.length; i++)
	{
		gameInfo.board[i] = '-';

	}
	for (i = 0; i < gameInfo.length; i++)
	{
		printf("%c", gameInfo.board[i]);
	}
	putchar('\n');

	printf("  ");
	for (i = 0; i < gameInfo.length; i++)
	{
		if ((i + 1) % 10 == 0)
		{
			printf("%d", (i + 1) / 10);
		}
		else
		{
			printf("|");
		}
	}
	putchar('\n');

	printf("  ");
	for (i = 0; i < gameInfo.length; i++)
	{
		printf("%d", (i + 1) % 10);
	}
	putchar('\n');

	// loop for playing game
	do
	{
		validvalue = 1;



		printf("+---------------------------------------------------+\n");
		printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", playerInfo.lives, playerInfo.findedTreasure, gameInfo.limitMove);
		printf("+---------------------------------------------------+\n");

		// loop for movement
		do
		{
			validvalue = 1;
			printf("Next Move [1-%d]: ", gameInfo.length);
			scanf("%d", &playerInfo.move);

			if (!(playerInfo.move > 0 && playerInfo.move <= MAX_MOVE))
			{
				validvalue = 0;
				printf("  Out of Range!!!\n");
			}
			else
			{

				if (gameInfo.history[playerInfo.move - 1] == 1)
				{
					printf("\n===============> Dope! You've been here before!\n\n");
				}

				else
				{
					gameInfo.history[playerInfo.move - 1] = 1;

					if (gameInfo.treasure[playerInfo.move - 1] == 1 && gameInfo.bomb[playerInfo.move - 1] == 1)
					{
						gameInfo.board[playerInfo.move - 1] = '&';

						printf("\n===============> [&] !!! BOOOOOM !!! [&]\n");
						printf("===============> [&] $$$ Life Insurance Payout!!! [&]\n\n");

						gameInfo.limitMove -= 1;
						playerInfo.findedTreasure += 1;
						playerInfo.lives -= 1;

					}
					else if (gameInfo.treasure[playerInfo.move - 1] == 1)
					{
						gameInfo.board[playerInfo.move - 1] = '$';

						printf("\n===============> [$] $$$ Found Treasure! $$$ [$]\n\n");

						playerInfo.findedTreasure += 1;
						gameInfo.limitMove -= 1;

					}
					else if (gameInfo.bomb[playerInfo.move - 1] == 1)
					{
						gameInfo.board[playerInfo.move - 1] = '!';

						printf("\n===============> [!] !!! BOOOOOM !!! [!]\n\n");

						playerInfo.lives -= 1;
						gameInfo.limitMove -= 1;

					}
					else
					{
						gameInfo.board[playerInfo.move - 1] = '.';

						printf("\n===============> [.] ...Nothing found here... [.]\n\n");

						gameInfo.limitMove -= 1;

					}

				}

				if (playerInfo.lives == 0)
				{
					printf("No more LIVES remaining!\n\n");

				}
				if (gameInfo.limitMove == 0)
				{
					printf("No more MOVES remaining!\n\n");
				}

				// loop for game history

				printf("  ");
				for (i = 0; i < playerInfo.move; i++) // loop for player's location
				{
					if (i == playerInfo.move - 1)
					{
						printf("%c", playerInfo.characterSymbol);
						
						i = playerInfo.move;
					}
					else
					{
						printf(" ");
					}
				}
				putchar('\n');

				printf("  ");
				for (i = 0; i < gameInfo.length; i++) // loop for marking objects
				{
					printf("%c", gameInfo.board[i]);
				}
				putchar('\n');

				printf("  ");
				for (i = 0; i < gameInfo.length; i++) // loop for ruler
				{
					if ((i + 1) % 10 == 0)
					{
						printf("%d", (i + 1) / 10);
					}
					else
					{
						printf("|");
					}
				}
				putchar('\n');

				printf("  ");
				for (i = 0; i < gameInfo.length; i++) // loop for detail ruler
				{
					printf("%d", (i + 1) % 10);
				}
				putchar('\n');

			}
		} while (!validvalue);

		if (playerInfo.lives == 0)
		{
			validvalue = 0;

			printf("+---------------------------------------------------+\n");
			printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", playerInfo.lives, playerInfo.findedTreasure, gameInfo.limitMove);
			printf("+---------------------------------------------------+\n\n");

			validvalue = 1;
		}
		if (gameInfo.limitMove == 0)
		{
			validvalue = 0;


			printf("+---------------------------------------------------+\n");
			printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", playerInfo.lives, playerInfo.findedTreasure, gameInfo.limitMove);
			printf("+---------------------------------------------------+\n\n");
			validvalue = 1;
		}
	} while (playerInfo.lives > 0 && gameInfo.limitMove > 0);


	printf("##################\n"
		"#   Game over!   #\n"
		"##################\n\n");

	printf("You should play again and try to beat your score!\n\n");

	return 0;
}
