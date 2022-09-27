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
int len = 0;
int len2 = 0;
int count = 0;
int k = 0;
int d = 0;
while (haystack[k] != '\0')
{
k++;
}
while (haystack[d] != ' ')
{
d++;
}
len = k - d;
while (len <= k)
{
while (needle[len2] != '\0')
{
if (needle[len2] == haystack[len])
{
count++;
return (&haystack[len]);
}
len2++;
}
len2 = 0;
len++;
}
return (0);
}
