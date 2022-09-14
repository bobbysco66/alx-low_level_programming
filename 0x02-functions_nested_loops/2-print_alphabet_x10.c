#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
char start = 'a';
char end = 'z';
char ch = start;
char i = 0;
for (i < 10; i++)
{
while (ch <= end)
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
}
