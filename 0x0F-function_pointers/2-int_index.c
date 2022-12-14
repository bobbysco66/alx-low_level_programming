#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search for index
 * @size: The size
 * @array: The array
 * @cmp: The name
 * Return: the index of the first element found match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
