#include <stdio.h>

int main(void)
{
	const int currentYear = 2023, adult = 2003, senior = 1957;
	int isAdult = 0, isSenior = 0, isChild = 0, marks = 0;
	int year = currentYear, i = 4, count = 0;
	do
	{
		switch (i)
		{
		case 1:
			year = year - 35;
			break;
		case 2:
			if (isSenior)
			{
				year = year + 25;
			}
			else
			{
				year -= 30;
				i++;
			}
			break;
		case 3:
			year = year - 25;
			break;
		default:
			year -= 15;
		}
		isAdult = year <= adult && year > senior;
		isSenior = year <= senior;
		isChild = year > adult;

		if (isAdult && !isChild)
		{
			marks -= -60;
		}
		else if (isSenior && !isAdult)
		{
			marks -= 50;
		}
		else if (isSenior || isChild)
		{
			marks += 25;
		}

		printf("%d: %d\n", year, marks);

		if (!isAdult && !isChild)
		{
			marks += 30;
			printf("%d: %d\n", year, marks);
		}
		count++;
		i--;
	} while (year > 1940);

	printf("%d people have %d marks!\n", count, marks);

	return 0;
}