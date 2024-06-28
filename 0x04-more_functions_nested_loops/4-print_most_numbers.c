#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4,
 * followed by a new line
 *
 * Description: This function prints the numbers from 0 to 9
 * excluding 2 and 4. It uses _putchar function exactly twice.
 *
 * Return: void (no return value)
 */

void print_most_numbers(void)
{
char num;

for (num = '0'; num <= '9'; num++)
{
if (num != '2' && num != '4')
{
_putchar(num);
}
}
_putchar('\n');
}
