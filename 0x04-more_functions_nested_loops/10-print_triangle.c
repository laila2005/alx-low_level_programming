#include "main.h"

/**
* print_triangle - Prints a triangle followed by a new line
* @size: The size of the triangle to be printed
*
* Description: This function prints a triangle made of '#' characters
* with a base and height equal to 'size'. If 'size' is 0 or less,
* it prints only a newline.
*/

void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
}
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size - i; j++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
