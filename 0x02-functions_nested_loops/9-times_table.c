#include "main.h"
/**
 * times_table - prints the last digit of a number.
 *
 * Return: always 0
 */
void times_table(void)
{
int a, b, y, u, d;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
y = a * b;
if (y > 9)
{
u = y % 10;
d = (y - u) / 10;
_putchar(44);
_putchar(32);
_putchar(d + '0');
_putchar(u + '0');
}
else
{
if (b != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(y + '0');
}
}
_putchar('\n');
}
}
