#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: The string to convert
 *
 * Return: A pointer to the resulting string str.
 */
char *string_toupper(char *str)
{
    char *ptr = str;

    while (*ptr != '\0')
    {
        if (islower(*ptr))
        {
            *ptr = toupper(*ptr);
        }
        ptr++;
    }

    return str;
}
