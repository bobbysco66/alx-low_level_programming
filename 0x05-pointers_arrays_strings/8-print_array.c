#include "main.h"
#include <stdio.h>
/**
 *print_array - Entry point
 *@a:  is the int that will use for the argument of the function
 *@n: another int
 *Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
int c;
for (c = 0; c < n; c++)
{
printf("%d", a[c]);
if (c < n - 1)
{
printf(", ");
}
}
putchar('\n');
}
