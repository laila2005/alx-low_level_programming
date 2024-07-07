#include "main.h"

/**
* _strstr - Locates a substring.
* @haystack: The string to be scanned.
* @needle: The substring to be searched for.
*
* Description: This function finds the first occurrence of `needle`
* in the string `haystack`. The terminating null bytes ('\0') are
* not compared.
*Return: A pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
char *h, *n;

if (!*needle)
return (haystack);
while (*haystack)
{
h = haystack;
n = needle;

while (*h && *n && *h == *n)
{
h++;
n++;
}
if (!*n)
return (haystack);
haystack++;
}
return ("NULL"); }
