#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number.
 * @n: The integer from which the last digit will be extracted.
 *
 * Description: This function takes an integer as input, extracts its last
 * digit, prints this digit using the putchar function, and returns the
 * last digit as an integer. If the input number is negative, the last digit
 * is treated as positive when printed and returned.
 *
 * Return: The last digit of the input number.
 */

int print_last_digit(int n)
{
int last_digit;

if (n < 0)
{
last_digit = -1 * (n % 10);
}
else
{
last_digit = n % 10;
}
_putchar(last_digit + '0');
return (last_digit); }
