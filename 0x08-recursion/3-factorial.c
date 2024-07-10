# include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: The number whose factorial is to be calculated
 *
 * Description: This function calculates the factorial of a given
 * number recursively. If the number is less than 0, it returns -1
 * to indicate an error. The factorial of 0 is 1.
 *
 * Return: The factorial of the number, or -1 if the number is less than 0
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
