#include "main.h"
#include <stdio.h>
/**
 *_strspn - Entry point
 *@s:  is the int that will use for the argument of the function
 *@accept: another one
 *Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
int len = 0;
int len2 = 0;
int count = 0;
while(s[len] != ' ')
{
while (accept[len2] != '\0')
{
if (accept[len2] == s[len])
{
count++;
}
len2++;
}
len2 = 0;
len++;
}
return(count);
}
