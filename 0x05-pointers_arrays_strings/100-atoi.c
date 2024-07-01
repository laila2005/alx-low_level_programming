#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
* _atoi - Converts a string to an integer.
* @s: Pointer to the string to be converted.
*
* Return: The converted integer.
*/

int _atoi(char *s)
{
int sign = 1;
int i = 0;
int j = 0;
char result[100];

while (s[i] == ' ')
{
i++;
}
while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
{
sign = -sign;
}
i++;
}
while (s[i] != '\0')
{
if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
{
result[j++] = s[i++];
}
else if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-' || s[i] == '+' || s[i] == ' ')
{
result[j++] = s[i++];
}
else
{
i++;
}
}
result[j] = '\0';
printf("%s\n", result);
return (0);
}
