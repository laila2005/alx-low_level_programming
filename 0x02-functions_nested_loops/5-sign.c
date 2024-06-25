#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Description: This function prints the sign of the input number `n`.
 * It prints '+' if `n` is greater than 0, '0' if `n` is 0, and '-' if `n`
 * is less than 0. The function returns 1 if `n` is positive, 0 if `n` is zero,
 * and -1 if `n` is negative.
 *
 * Return: 1 if `n` is positive, 0 if `n` is zero, -1 if `n` is negative
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1); }
else if (n < 0)
{
_putchar('-');
return (-1); }
else
{
_putchar('0');
return (0); }
return (0); }
