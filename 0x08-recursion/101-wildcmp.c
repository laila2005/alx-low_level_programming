#include <stdio.h>

/**
* wildcmp - compares two strings considering special character *
* @s1: The first string to compare
* @s2: The second string to compare, can contain *
*
* Description: This function compares two strings,where s2 can contain
* the special character * that can replace any string
* (including an empty string).
* It uses recursion to handle the comparison.
*
* Return: 1 if the strings can be considered identical, otherwise 0
*/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '*')
{
while (*s2 == '*')
{
s2++;
}
if (*s2 == '\0')
{
return (1);
}
while (*s1 != '\0')
{
if (wildcmp(s1, s2))
{
return (1);
}
s1++;
}
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
