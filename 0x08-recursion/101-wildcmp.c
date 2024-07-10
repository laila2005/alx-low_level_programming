#include "main.h"

/**
 * _wildcmp - recursively compares two strings considering wildcard *
 * @s1: pointer to the first string
 * @s2: pointer to the second string, may contain '*'
 *
 * Description:
 * This function recursively compares two strings, where s2 can contain
 * the special character '*' that can match with any sequence of characters
 * (including an empty sequence). It uses recursion to handle the comparison
 * without loops.
 *
 * Return:
 * 1 if the strings can be considered identical, otherwise 0
 */

int _wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '*') {
if (*(s2 + 1) == '\0')
{
return (1);
}
if (*s1 == '\0')
{
return (0);
}
return (_wildcmp(s1 + 1, s2) || _wildcmp(s1, s2 + 1));
}
if (*s1 == *s2)
{
return (_wildcmp(s1 + 1, s2 + 1));
}
return (0);
}

/**
 * wildcmp - compares two strings considering wildcard *
 * @s1: pointer to the first string
 * @s2: pointer to the second string, may contain '*'
 *
 * Description:
 * This function compares two strings, where s2 can contain
 * the special character '*' that can match with any sequence of characters
 * (including an empty sequence). It serves as a wrapper for _wildcmp.
 *
 * Return:
 * 1 if the strings can be considered identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
return (_wildcmp(s1, s2));
}
