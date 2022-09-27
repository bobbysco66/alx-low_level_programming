#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - Entry point
 *@s:  is the int that will use for the argument of the function
 *@accept: another one
 *Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
return (s + i);
}
j++;
}
i++;
}
return (0);
}
