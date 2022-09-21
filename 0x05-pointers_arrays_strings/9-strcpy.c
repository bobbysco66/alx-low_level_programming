#include "main.h"
#include <stdio.h>
/**
 *_strcpy - Entry point
 *@dest:  is the int that will use for the argument of the function
 *@src: another one 
 *Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
int n = 0;
int i;
while (src[n] != '\0')
{
n++;
}
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
i = i;
while (i <= n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
