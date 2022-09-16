#include "main.h"
#include <stdio.h>
/**
 *more_numbers - Entry point
 * Return: nothing
 */
void more_numbers(void)
{
int num;
while (int i = 0; i < 10; i++)
{
for (num = 0; num <= 15; num++)
{
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
