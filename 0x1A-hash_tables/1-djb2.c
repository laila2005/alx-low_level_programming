#include "hash_tables.h"
#include <stddef.h>
/**
* hash_djb2 - function that generates a hash number from
* a given string using the DJB2 algorithm
*
* @str: the input string to hash
* Return: hash number
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;

if (str == NULL)
return (0);

hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash)+c;
}
return (hash);
}
