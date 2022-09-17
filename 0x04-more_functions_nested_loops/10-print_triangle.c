#include "main.h"
#include <stdio.h>
/**
 *print_triangle - Entry point
 *@size: number of times
 * Return: nothing
 */
void print_triangle(int size)
{
int h;
int row;
int space;
if (size > 0)
{
for (h = 0; h <= size; h++)
{
for (row = 0; row < (h + 1); row++)
{
for (space = 0; space < size - row; space++)
{
_putchar(' ');
}
_putchar('#');
}
if (h == size)
{
continue;
}
_putchar('\n');
}
}
_putchar('\n');
}
