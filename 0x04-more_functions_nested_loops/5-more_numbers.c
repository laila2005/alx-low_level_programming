#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 *
 * Description: This function prints the numbers from 0 to 14,
 * each followed by a space, and repeats this process ten times.
 * After each set of numbers, it prints a new line.
 *
 * Return: void (no return value)
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('1');
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
