#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to check
 *
 * Description: This function takes an integer representing
 * a character (in ASCII value) and checks if the character
 * is an uppercase letter. If the character is an uppercase
 * letter ('A' through 'Z'), the function returns 1.
 * Otherwise, it returns 0.
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
