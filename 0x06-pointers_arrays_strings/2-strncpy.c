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
int k = 0;
int tot = 0;
int c = 0;
int holdi = 0;
int holdn = 0;
holdn = n;
while (dest[k] != '\0')
{
k++;
}
while (src[c] != '\0')
{
c++;
}
holdi = c;
if (n >= c)
{
n = c;
}
else
{
n = n;
}
c = 0;
tot = n;
while (c < tot)
{
dest[c] = src[c];
c++;
}
while (holdn > holdi)
{
dest[c] = '\0';
c++;
holdi++;
}
return (dest);
}
