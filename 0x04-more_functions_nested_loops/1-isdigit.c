#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to check
 *
 * Description: This function takes an integer representing
 * a character (in ASCII value) and checks if the character
 * is a digit. If the character is a digit ('0' through '9'),
 * the function returns 1. Otherwise, it returns 0.
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
{
return (0);
}
return (0);
}
