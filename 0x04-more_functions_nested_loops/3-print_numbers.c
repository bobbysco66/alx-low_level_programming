#include "main.h"
#include <stdio.h>
/**
 *print_numbers - Entry point
 * Return: nothing
 */
void print_numbers(void)
{
int i = 0;
for (i <= 9; i++;)
{_putchar((i % 10) + '0');
}
_putchar('\n');
}
