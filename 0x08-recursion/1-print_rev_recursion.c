#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: The string to be printed in reverse
 *
 * Description: This function prints a string in reverse order
 * recursively. It uses the _putchar function to print each character
 * of the string starting from the end.
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
