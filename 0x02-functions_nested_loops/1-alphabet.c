#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
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
}
