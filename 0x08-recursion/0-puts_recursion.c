#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: The string to be printed
 *
 * Description: This function prints a string recursively, followed
 * by a new line. It uses the _putchar function to print each character
 * of the string. If the end of the string is reached, it prints a new
 * line character.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
