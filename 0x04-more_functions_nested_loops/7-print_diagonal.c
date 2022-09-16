#include "main.h"
#include <stdio.h>
/**
 *print_diagonal - Entry point
 *@n: number of times
 * Return: nothing
 */
void print_diagonal(int n)
{
int i;
int gap;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (gap = 0; gap < i; gap++)
{
_putchar(' ');
}
_putchar('\\');
if (len == (n - 1))
{
continue
}
_putchar('\n');
}
}
_putchar('\n');
}
