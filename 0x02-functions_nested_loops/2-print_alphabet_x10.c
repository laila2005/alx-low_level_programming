#include "main.h"

/**
 * print - function print the alphabet 10 times.
 *
 * Return 
 */

void print_alphabet_x10(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
_putchar("abcdefghijklmnopqrstuvwxyz"[j]);
}
_putchar('\n');
}
}
