#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letterS, letterC;

for (letterS = 'a'; letterS <= 'z'; letterS++)
{
putchar(letterS);
}

for (letterC = 'A'; letterC <= 'Z'; letterC++)
{
putchar(letterC);
}
putchar('\n');

return (0); }
