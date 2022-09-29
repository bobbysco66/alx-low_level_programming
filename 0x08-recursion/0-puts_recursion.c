#include "main.h"
#include <stdio.h>
/**
 *_puts_recursion - Entry point
 *@s:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
