/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #2 (P2)
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
#include <math.h>


int main(void)
{
	const double TAX = 0.13;
	const char patSize = 'S', salSize = 'M', tomSize = 'L';

	int patQty, salQty, tomQty;
	double SMALL, MEDIUM, LARGE;

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
	scanf("%d", &patQty);
	printf("\n");

	printf("Tommy's shirt size is '%c'\n", tomSize);
	printf("Number of shirts Tommy is buying: ");
	scanf("%d", &tomQty);
	printf("\n");

	printf("Sally's shirt size is '%c'\n", salSize);
	printf("Number of shirts Sally is buying: ");
	scanf("%d", &salQty);
	printf("\n");

	int patSubTotal = (int)((patQty * SMALL) * 100);
	int patTax = (int)(patSubTotal * TAX + 0.5);
	int patTotal = patSubTotal + patTax;

	int salSubTotal = (int)((salQty * MEDIUM) * 100);
	int salTax = (int)(salSubTotal * TAX + 0.5);
	int salTotal = salSubTotal + salTax;

	int tomSubTotal = (int)((tomQty * LARGE) * 100);
	int tomTax = (int)(tomSubTotal * TAX + 0.5);
	int tomTotal = tomSubTotal + tomTax;

	int threeQty = patQty + salQty + tomQty;
	int threeSubTotal = patSubTotal + salSubTotal + tomSubTotal;
	int threeTax = patTax + salTax + tomTax;
	int threeTotal = patTotal + salTotal + tomTotal;


	printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
	printf("-------- ---- ----- --- --------- --------- ---------\n");
	printf("Patty    %c    %.2f   %d  %8.4lf  %8.4lf  %8.4lf\n", patSize, SMALL, patQty, (double)patSubTotal / 100, (double)patTax / 100, (double)patTotal / 100);
	printf("Sally    %c    %.2f   %d  %8.4lf  %8.4lf  %8.4lf\n", salSize, MEDIUM, salQty, (double)salSubTotal / 100, (double)salTax / 100, (double)salTotal / 100);
	printf("Tommy    %c    %.2f   %d  %8.4lf  %8.4lf  %8.4lf\n", tomSize, LARGE, tomQty, (double)tomSubTotal / 100, (double)tomTax / 100, (double)tomTotal / 100);
	printf("-------- ---- ----- --- --------- --------- ---------\n");
	printf("                        % 8.4lf  % 8.4lf % 8.4lf\n\n", (double)threeSubTotal / 100, (double)threeTax / 100, (double)threeTotal / 100);

	printf("Daily retail sales represented by coins\n");
	printf("=======================================\n\n");
	int balNoTwo = threeSubTotal;
	int tooniesNo = balNoTwo / 200;
	balNoTwo = balNoTwo % 200;

	int balNoOne = balNoTwo;
	int looniesNo = balNoOne / 100;
	balNoOne = balNoTwo % 100;

	int balNoQuat = balNoOne;
	int quatNo = balNoQuat / 25;
	balNoQuat = balNoOne % 25;

	int balNoDime = balNoQuat;
	int dimeNo = balNoDime / 10;
	balNoDime = balNoQuat % 10;

	int balNoNick = balNoDime;
	int nickNo = balNoNick / 5;
	balNoNick = balNoDime % 5;

	int balNoPen = balNoNick;
	int penNo = balNoPen / 1;
	balNoPen = balNoNick % 1;

	int averageNoTax = (patSubTotal + tomSubTotal + salSubTotal + 0.05) * 100 / threeQty;
	int averageWithTax = (threeTotal + 0.05) * 100 / threeQty;

	/*int averageNoTax = (patQty * SMALL + tomQty * LARGE + salQty * MEDIUM + 0.0005) / threeQty * 10000;*/

	/*it averageWithTax = (((patQty * SMALL) + (patQty * SMALL * TAX)) + (tomQty * LARGE) + (tomQty * LARGE * TAX) + (salQty * MEDIUM) + (salQty * MEDIUM * TAX) + 0.005) / threeQty * 10000;*/


	printf("Sales EXCLUDING tax\n");
	printf("Coin     Qty   Balance\n");
	printf("-------- --- ---------\n");
	printf("              %8.4lf\n", (double)threeSubTotal / 100);
	printf("Toonies  %d  %8.4lf\n", tooniesNo, (double)balNoTwo / 100);
	printf("Loonies    %d  %8.4lf\n", looniesNo, (double)balNoOne / 100);
	printf("Quarters   %d  %8.4lf\n", quatNo, (double)balNoQuat / 100);
	printf("Dimes      %d  %8.4lf\n", dimeNo, (double)balNoDime / 100);
	printf("Nickels    %d  %8.4lf\n", nickNo, (double)balNoNick / 100);
	printf("Pennies    %d  %8.4lf\n\n", penNo, (double)balNoPen / 100);

	printf("Average cost/shirt: $%.4lf\n\n", (double)averageNoTax / 10000);

	int balTwo = threeTotal;
	int toonies = balTwo / 200;
	balTwo = balTwo % 200;

	int balOne = balTwo;
	int loonies = balOne / 100;
	balOne = balTwo % 100;

	int balQuat = balOne;
	int quat = balQuat / 25;
	balQuat = balOne % 25;

	int balDime = balQuat;
	int dime = balDime / 10;
	balDime = balQuat % 10;

	int balNick = balDime;
	int nick = balNick / 5;
	balNick = balDime % 5;

	int balPen = balNick;
	int pen = balPen / 1;
	balPen = balNick % 1;

	printf("Sales INCLUDING tax\n");
	printf("Coin     Qty   Balance\n");
	printf("-------- --- ---------\n");
	printf("              %8.4lf\n", (double)threeTotal / 100);
	printf("Toonies  %d  %8.4lf\n", toonies, (double)balTwo / 100);
	printf("Loonies    %d  %8.4lf\n", loonies, (double)balOne / 100);
	printf("Quarters   %d  %8.4lf\n", quat, (double)balQuat / 100);
	printf("Dimes      %d  %8.4lf\n", dime, (double)balDime / 100);
	printf("Nickels    %d  %8.4lf\n", nick, (double)balNick / 100);
	printf("Pennies    %d  %8.4lf\n\n", pen, (double)balPen / 100);

	printf("Average cost/shirt: $%.4lf\n\n", (double)averageWithTax / 10000);

	return 0;
}

