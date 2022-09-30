#include "main.h"
#include <stdio.h>
/**
 *_puts - Entry point
 *@s:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
}
