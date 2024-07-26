#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name.
 * @name: The name of the person to be printed.
 * @f: A pointer to the function that prints the name.
 *
 * Description: This function takes a name and a function pointer
 * as arguments. It checks if both are non-null, and if so, calls
 * the function pointed to by `f`, passing `name` as an argument.
 * This allows for flexible handling of name printing.
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
