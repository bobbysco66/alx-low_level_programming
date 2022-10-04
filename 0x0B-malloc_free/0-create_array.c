#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array- creates an array
 * @c: array initialization
 * @size: array size
 *Return: On success 1.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *a;
if (size == 0)
{
return (NULL);
}
else
{
a = malloc(sizeof(char) * size);
if (a == NULL)
{
return (NULL);
}
else
{
while (i < size)
{
a[i] = c;
i++;
}
}
return (a);
}
}
