#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The byte value to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Description: This function fills the first `n` bytes of the memory area
 *              pointed to by `s` with the constant byte `b`.
 * Return: A pointer to the memory area `s`.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s); }
