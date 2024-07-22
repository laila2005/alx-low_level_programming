#include <stddef.h>
#include "dog.h"
void print_dog(struct dog *d)
{
    char *nil_str = "(nil)";
    int int_age, digit, decimal_age;

    if (d == NULL)
    {
     
        return;
    }

        if (d->name != NULL)
    {
        char *name = d->name;
        while (*name != '\0')
	{
            _putchar(*name);
            name++;
        }
    }
    else
    {
        while (*nil_str != '\0')
	{
            _putchar(*nil_str);
            nil_str++;
        }
    }
    _putchar('\n');

    int_age = (int)d->age;
    int_age = (int_age >= 0) ? int_age : -int_age;
    while (int_age > 0) {
        digit = int_age % 10;
        _putchar('0' + digit);
        int_age /= 10;
    }
    _putchar('.');
    decimal_age = (int)((d->age - (float)int_age) * 10);
    _putchar('0' + decimal_age);
    _putchar('\n');

    
    if (d->owner != NULL)
    {
        char *owner = d->owner;
        while (*owner != '\0')
	{
            _putchar(*owner);
            owner++;
        }
    }
    else
    {
        while (*nil_str != '\0')
	{
            _putchar(*nil_str);
            nil_str++;
        }
    }
    _putchar('\n');
}
