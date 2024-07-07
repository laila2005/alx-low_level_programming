#include "main.h"

/**
* _memcpy - Copies at most n bytes from src string to dest string
* @dest: The destination string to which the src string will be copied
* @src: The source string to be copied to the dest string
* @n: The maximum number of bytes to be copied from src
*
* Description: This function copies at most n bytes from the src string to the
* dest string. If src contains less than n bytes, the rest of dest will be
* padded with null bytes. If src contains n or more bytes, dest will not be
* null-terminated.
*
* Return: A pointer to the resulting string dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest); }
