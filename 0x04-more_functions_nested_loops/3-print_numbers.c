#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line
 *
 * Description: This function prints the numbers from 0 to 9
 * followed by a new line ('\n') using the _putchar function
 * exactly twice, as per the restriction.
 *
 * Return: void (no return value)
 */

void print_numbers(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}
