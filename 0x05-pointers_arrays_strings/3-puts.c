#include "main.h"
#include <stdio.h>
/**
 *_puts - Entry point
 *@str:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
