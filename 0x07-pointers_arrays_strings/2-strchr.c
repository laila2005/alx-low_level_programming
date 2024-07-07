#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to locate.
 *
 * Description: This function locates the first occurrence of the character
 * `c` in the string `s`. If the character is found, a pointer
 * to the first occurrence is returned. If the character is
 * not found, NULL is returned.
 * Return: A pointer to the first occurrence of the character `c` in the
 * string `s`, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return ('NULL'); }
