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
int result = 0;
int i = 0;

while (s[i] == ' ')
{
i++;
}
while (s[i] == '-' || s[i] == '+')
{
sign = (s[i] == '-') ? -sign : sign;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
if (result > INT_MAX / 10 || (result == INT_MAX / 10 &&
(s[i] - '0') > INT_MAX % 10))
{
return ((sign == 1) ? INT_MAX : INT_MIN);
}
result = result * 10 + (s[i] - '0');
i++;
}
if (s[i] != '\0')
{
return (result *sign);
}
return (result *sign);
}
