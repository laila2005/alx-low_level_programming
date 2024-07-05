#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Description: This function compares the strings pointed to by s1 and s2.
 * It returns an integer less than, equal to, or greater than zero if s1 is
 * found, respectively, to be less than, to match, or to be greater than s2.
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found
 * to be less than, equal to, or greater than s2, respectively.
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return *(unsigned char *)s1 - *(unsigned char *)s2; }
