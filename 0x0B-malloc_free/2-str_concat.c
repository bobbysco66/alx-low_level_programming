#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concat two arrays
 * @s1: size of the memory to print
 * @s2: size of the memory to print
 * Return: a pointer of array or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
int len1 = strlen(s1) + 1;
int len2 = strlen(s2) + 1;
char *concat = NULL;
int a;
int i = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
concat = (char *)malloc(sizeof(char) * (len1 + len2));
if (concat == NULL)
{
return (NULL);
}
while (s1[i] != '\0')
{
concat[i] = s1[i];
i++;
}
a = 0;
while (s2[a] != '\0')
{
concat[i] = s2[a];
i++;
a++;
}
return (concat);
}
