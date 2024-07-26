#include <stdlib.h>

/**
* int_index - Searches for an integer in an array.
* @array: The array of integers to search through.
* @size: The number of elements in the array.
* @cmp: A pointer to the function used to compare values.
*
* Return: The index of the first element for which the cmp
* function does not return 0. If no such element is found,
* or if size is less than or equal to 0, return -1.
*
* Description: This function iterates over the array and uses
* the cmp function to compare each element. It returns the
* index of the first element that satisfies the condition
* specified by cmp.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1); }
