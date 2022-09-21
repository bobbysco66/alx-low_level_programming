#include "main.h"
#include <stdio.h>
/**
 *puts_half - Entry point
 *@str:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int i = 0;
int j;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
i = i / 2;
}
else
{
i = (i + 1) / 2;
}
while (str[i] != '\0')
{
j = str[i];
i++;
_putchar(j);
}
_putchar('\n');
}
