#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string whose length is to be calculated
 *
 * Description: This function calculates the length of a string
 * recursively. It does so by advancing one character at a time
 * until the end of the string (null terminator) is reached.
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
