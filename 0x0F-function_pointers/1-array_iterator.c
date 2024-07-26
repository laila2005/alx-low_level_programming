#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array of integers to iterate over.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
 *
 * Description: This function takes an array, its size, and a function
 * pointer as arguments. It iterates over each element of the array and
 * calls the function pointed to by `action` on each element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
