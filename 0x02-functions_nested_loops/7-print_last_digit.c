#include <stdio.h>

int print_last_digit(int n)
{
    int last_digit;

if (n < 0)
{
last_digit = -1 * (n % 10);
}
else
{
last_digit = n % 10;
}
putchar(last_digit + '0');
return (last_digit); }

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    int r;

print_last_digit(98);
print_last_digit(0);
r = print_last_digit(-1024);
putchar('0' + r);
putchar('\n');
return (0); }
