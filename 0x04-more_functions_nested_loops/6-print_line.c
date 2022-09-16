#include "main.h"
#include <stdio.h>
/**
 *print_line - Entry point
 *@n: number of times
 * Return: nothing
 */
void print_line(int n)
{
int i = 1;
for (i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
