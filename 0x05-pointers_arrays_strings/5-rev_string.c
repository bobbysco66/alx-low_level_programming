#include "main.h"
#include <stdio.h>
/**
 *rev_string - Entry point
 *@s:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
rev_string(char *s)
{
int c = 0;
char *temp = *s;
int len;
while (s[c] != '\0')
{
c++;
}
len = c; 
for (int a = 0; a <= len; a++)
{
s[a] = temp[c];
a++;
c--;
}
}