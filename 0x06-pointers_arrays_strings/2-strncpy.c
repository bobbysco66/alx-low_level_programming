#include "main.h"
#include <stdio.h>
/**
 *_strncpy - Entry point
 *@dest:  is the int that will use for the argument of the function
 *@src: another one
 *@n: cut off
 *Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
int k, i, tot = 0;
int holdn, holdi = 0;
holdn = n;
while (dest[k] != '\0')
{
k++;
}
while (src[i] != '\0')
{
i++;
}
holdi = i;
if (n >= i)
{
n = i;
}
else
{
n = n;
}
i = 0;
tot = n;
while (i < tot)
{
dest[i] = src[i];
i++;
}
if (holdn >= holdi)
{
dest[i] = '\0';
}
return (dest);
}
