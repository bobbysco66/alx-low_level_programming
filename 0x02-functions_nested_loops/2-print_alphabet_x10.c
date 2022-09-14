#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
char i = 0;
while (i < 10)
{
char start = 'a';
char end = 'z';
char ch = start;
while (ch <= end)
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
