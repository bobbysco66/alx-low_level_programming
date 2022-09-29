#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion - Entry point
 *@s:  is the int that will use for the argument of the function
 *Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
