#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be scanned.
 * @accept: The string containing the list of characters to match in `s`.
 *
 * Description: This function locates the first occurrence in the string `s`
 *              of any of the bytes in the string `accept`. If a matching byte
 *              is found, a pointer to that byte is returned. If no such byte
 *              is found, NULL is returned.
 *
 * Return: A pointer to the byte in `s` that matches one of the bytes in
 *         `accept`, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
char *a;
while (*s)
{
for (a = accept; *a; a++)
{
if (*s == *a)
{
return (s);
}
}
s++;
}
return ("NULL");
}
