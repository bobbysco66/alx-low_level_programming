#include "main.h"
#include <stdio.h>
/**
 *print_line - Entry point
 *@n: number of times
 * Return: nothing
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
