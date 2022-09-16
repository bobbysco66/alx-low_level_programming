#include "main.h"
#include <stdio.h>
/**
 *more_numbers - Entry point
 * Return: nothing
 */
void more_numbers(void)
{
int num;
int i = 0;
while (i < 10)
{
for (num = 0; num <= 14; num++)
{
_putchar((num % 10) + '0');
}
_putchar('\n');
i++; 
}
}
