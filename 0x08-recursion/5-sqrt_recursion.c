#include "main.h"

/**
* _sqrt_helper - helps to find the natural square root of a number
* @n: The number whose square root is to be calculated
* @i: The current number to check
*
* Description: This helper function checks if the current number i
* is the natural square root of n. It does so by incrementing i
* recursively until i * i equals n or i * i exceeds n.
*
* Return: The natural square root of n, or -1 if it does not have one
*/

int _sqrt_helper(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (_sqrt_helper(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: The number whose square root is to be calculated
*
* Description: This function calculates the natural square root of a
* number using recursion. If the number does not have a natural square
* root, it returns -1.
*
* Return: The natural square root of the number, or -1 if it does not have one
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_helper(n, 0));
}
