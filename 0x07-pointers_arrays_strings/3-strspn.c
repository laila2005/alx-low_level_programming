#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: The string to be scanned.
* @accept: The string containing the list of characters to match in `s`.
*
* Description: This function calculates the length (in bytes) of the initial
*              segment of `s` which consists entirely of bytes in `accept`.
*
* Return: The number of bytes in the initial segment of `s` which consist
*         only of bytes from `accept`.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
char *a;

while (*s)
{
for (a = accept; *a; a++)
{
if (*s == *a)
{
break;
}
}
if (*a == '\0')
{
return (length);
}
length++;
s++;
}

return (length);
}
