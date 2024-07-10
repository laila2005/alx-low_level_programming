#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: The base value
 * @y: The exponent value
 *
 * Description: This function calculates the power of x raised to y
 * recursively. If y is less than 0, it returns -1 to indicate an error.
 * If y is 0, the result is 1 because any number raised to the power of 0
 * is 1.
 *
 * Return: The value of x raised to the power of y, or -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
