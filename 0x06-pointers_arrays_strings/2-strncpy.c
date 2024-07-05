#include <stdio.h>

/**
* _strncpy - Concatenates at most n bytes from src string to dest string
* @dest: The destination string to which the src string will be appended
* @src: The source string to be appended to the dest string
* @n: The maximum number of bytes to be appended from src
*
* Description: This function appends at most n bytes from the src string to the
* dest string, overwriting the terminating null byte (\0) at the end of dest,
* and then adds a terminating null byte. If src contains
* n or more bytes, it does
* not need to be null-terminated.The function returns a pointer to
* string dest. Ensure that dest has enough space to hold the result of the
* concatenation to avoid buffer overflow.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
char *dest_end = dest;

while (n > 0 && *src != '\0')
{
*dest_end = *src;
dest_end++;
src++;
n--;
}
*dest_end = '\0';
return (dest); }
