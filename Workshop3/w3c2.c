#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	// Day of the week
	//-----------------
	// <1	SUNDAY
	// 1	MONDAY
	// 2	TUESDAY
	// 3	WEDNESDAY
	// 4	THURSDAY
	// 5	FRIDAY
	// >5	SATURDAY

	int dayofWeek;
	printf("Enter day of the week: ");
	scanf("%d", &dayofWeek);

	printf("Sunday: %d\n", dayofWeek < 1);
	printf("Monday: %d\n", dayofWeek == 1);
	printf("Sunday: %d\n", dayofWeek == 2);
	printf("Sunday: %d\n", dayofWeek == 3);
	printf("Sunday: %d\n", dayofWeek == 4);
	printf("Sunday: %d\n", dayofWeek == 5);
	printf("Sunday: %d\n", dayofWeek > 5);



}