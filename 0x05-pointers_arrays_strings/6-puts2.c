#include "main.h"
#include <stdio.h>
/**
 *puts2 - Entry point
 *@str:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int c = 0;
int len;
while (str[c] != '\0')
{
c++;
}
len = c - 1;
c = 0;
while (c < len)
{
if ( c = 0)
{
_putchar(str[c]);
}
else
{
_putchar(str[c + 2]);
}
c++;
}
_putchar('\n');
}
