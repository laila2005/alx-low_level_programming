#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return(1); }
if (n == 0)
{
putchar('0');
return (0); }
if (n < 0)
{
putchar('-');
return(-1); }
return(0); }

int main(void)
{
    int r;

r = print_sign(98);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(0);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(0xff);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(-1);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
return (0); }
