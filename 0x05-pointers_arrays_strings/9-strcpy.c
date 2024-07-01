#include "main.h"

/**
 * _strcpy - Copies the string to the buffer pointed to by dest.
 * @dest: Pointer to buffer.
 * @src: Pointer to the string.
 *
 * Return: Pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
