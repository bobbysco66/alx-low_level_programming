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
while (ch <= end)
{
putchar(ch);
ch++;
}
char start2 = 'A';
char end2 = 'Z';
char ch2 = start2;
while (ch2 <= end2)
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
