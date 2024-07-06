#include "main.h"

/**
* leet - Encodes a string into 1337
* @str: The string to encode
*
* Return: A pointer to the resulting string str.
*/

char *leet(char *str)
{
char *leet_map[10] = {"a", "A", "e", "E", "o", "O", "t", "T", "l", "L"};
char leet_char[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == leet_map[j][0])
{
str[i] = leet_char[j];
break;
}
}
}
return (str); }
