#include "main.h"

/**
 * _strcat - Concatenates the src string to the dest string
 * @dest: The destination string to which the src string will be appended
 * @src: The source string to be appended to the dest string
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then adds
 * a terminating null byte. It returns a pointer to the resulting string dest.
 * Ensure that dest has enough space to hold the result of the concatenation to
 * avoid buffer overflow.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
char *dest_end = dest;
while (*dest_end != '\0')
{
dest_end++;
}
while (*src != '\0')
{
*dest_end = *src;
src++;
}
*dest_end = '\0';
return (dest);
}
