#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - create an array of chars
 * @str: size of the memory to print
 *
 * Return: a pointer of array or NULL if it fails
 */
char *_strdup(char *str)
{
char *dup;
int i;
int m = 0;
if (str == NULL)
{
return (NULL);
}
i = strlen(str) + 1;
dup = malloc(strlen(str) + 1);
if (dup == NULL)
{
return (NULL);
}
else
{
while (m <= i)
{
dup[m] = str[m];
m++;
}
}
return (dup);
}
