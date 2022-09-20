#include "main.h"
#include <stdio.h>
/**
 *print_rev - Entry point
 *@s:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
int c = 0;
while (*s != '\0')
{
c++;
s++;
}
c--;
for (c >= 0)
{
_putchar(s[c]);
c--;
}
_putchar('\n');
}
