#include "main.h"

/**
* print_triangle - Prints a triangle followed by a new line
* @size: The size of the triangle
*
* Description: This function prints a triangle using the
* character '#'. If size is 0 or less, it only prints
* a newline.
*
* Return: void (no return value)
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
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
