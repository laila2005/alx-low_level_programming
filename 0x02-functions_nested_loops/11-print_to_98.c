#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - print all natural number from n to 98
 * @n: the number to start printing from
 * return: always 0.
 */

void print_to_98(int n)
{
if (n <= 98)
{
	for (; n <= 98 ; n++)
	{
		if (n == 98)
	{
		printf("%d", n);
		printf("\n");
		break;
	}
	else
	{
printf("%d, ", n);

	}
	}
}
else
{
	for (; n >= 98 ; n--)
	{
		if (n == 98)
		{
		printf("%d", n);
		printf("\n");
		break;
	}
	else
	{
		printf("%d, ", n);
	}
}
}
}
