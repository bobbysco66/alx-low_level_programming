#include "main.h"
#include <stdio.h>
/**
 *_strstr - Entry point
 *@haystack:  is the int that will use for the argument of the function
 *@needle: another one
 *Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j;
for (i = 0; haystack[i] != '\0';)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (needle[j] != haystack[i + j])
{
break;
}
}
if (needle[j] == '\0')
{
return (&haystack[i]);
}
i++;
}
return ('\0');
}
