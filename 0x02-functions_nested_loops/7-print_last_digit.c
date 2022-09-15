#include "main.h"
#include <stdio.h>
/**
 *print_last_digit - Entry point
 *@c:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
int l = c % 10;
if (l <= 0)
{
l = l * -1;
}
_putchar (l + '0');
return (l);
}
