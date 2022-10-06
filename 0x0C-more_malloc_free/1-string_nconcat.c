#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concat two arrays
 * @s1: size of the memory to print
 * @s2: size of the memory to print
 * @n: the memory to allocate
 * Return: a pointer of array or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
unsigned int i, a;
char *concat = NULL;
if (s1 == NULL)
{
s1 = "";
}
len1 = strlen(s1) + 1;
if (s2 == NULL)
{
s2 = "";
}
len2 = strlen(s2) + 1;
if (n >= len2)
{
n = len2;
}
if (n < len2)
{
len2 = n;
}
concat = (char *)malloc(sizeof(char) * (len1 + len2 - 1));
if (concat == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
concat[i] = s1[i];
}
for (a = 0; a <= n; a++)
{
concat[i] = s2[a];
i++;
}
return (concat);
}
