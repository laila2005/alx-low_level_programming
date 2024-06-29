#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer using only _putchar.
 * @n: The integer to be printed.
 *
 * Description: This function prints an integer character by character
 * using recursion. It handles negative numbers by printing a '-' sign
 * and then converting the number to positive. The function recursively
 * divides the number by 10 to print each digit from the most significant
 * to the least significant, and uses _putchar to print each character.
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}
