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
int j;
while (str[c] != '\0')
{
c++;
}
len = c;
for (j = 0 ; j < len ; j = j + 2)
{
_putchar(str[j]);
}
_putchar('\n');
}
