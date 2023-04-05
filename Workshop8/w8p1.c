/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #8 (P1)
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


// System Libraries
#include <stdio.h>

// User Libraries
#include "w8p1.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* intNumber)
{
	int intInput, validValue;
	do
	{
		validValue = 1;
		scanf("%d", &intInput);

		if (intInput <= 0)
		{
			validValue = 0;
			printf("ERROR: Enter a positive value: ");
		}

	} while (!validValue);

	if (intNumber != NULL)
	{
		*intNumber = intInput;
	}
	return intInput;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

double getDoublePositive(double* floatNumber)
{
	double floatInput, validValue;

	do // loop for ERROR message
	{
		validValue = 1;
		scanf("%lf", &floatInput);

		if (floatInput <= 0)
		{
			validValue = 0;

			printf("ERROR: Enter a positive value: ");
		}

	} while (!validValue);

	if (floatNumber != NULL)
	{
		*floatNumber = floatInput;
	}
	return floatInput;
}


// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int product, const int gram)
{
	printf("Cat Food Cost Analysis\n"
		"======================\n\n");
	printf("Enter the details for %d dry food bags of product data for analysis.\n"
		"NOTE: A 'serving' is %dg\n", product, gram);
	putchar('\n');
}

// 4. Get user input for the details of cat food product
struct catFoodInfo getCatFoodInfo(const int productCount)
{
	struct catFoodInfo info = { 0 };

		printf("Cat Food Product #%d\n"
			"--------------------\n", productCount);

		printf("SKU           : ");
		getIntPositive(&info.sku);

		printf("PRICE         : $");
		getDoublePositive(&info.price);


		printf("WEIGHT (LBS)  : ");
		getDoublePositive(&info.weight);

		printf("CALORIES/SERV.: ");
		getIntPositive(&info.calories);

		putchar('\n');

	return info;
}



// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int sku, const double* price, const double* weight, const int calories)
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku, *price, *weight, calories);
	
}


// 7. Logic entry point
void start(void)
{
	int i;
	openingMessage(MAX_PRODUCT, SUGGEST_GRAM);
	struct catFoodInfo CatFoodData[MAX_PRODUCT];

	// loop for user input
	for (i = 0; i < MAX_PRODUCT; i++) 
	{
		CatFoodData[i] = getCatFoodInfo(i + 1);
	}
	displayCatFoodHeader();

	// loop for printing user's input
	for (i = 0; i < MAX_PRODUCT; i++)
	{
	displayCatFoodData(CatFoodData[i].sku, &CatFoodData[i].price, &CatFoodData[i].weight, CatFoodData[i].calories);
	}
}
