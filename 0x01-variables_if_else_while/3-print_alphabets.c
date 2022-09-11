#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char start = 'a';
char end = 'z';
char ch = start;
char big = 'A';
char bigger = 'Z';
char bg = big;
while (ch <= end)
{
putchar(ch);
ch++;
}
while (bg <= bigger)
{
putchar(bg);
bg++;
}
putchar('\n');
return (0);
}
