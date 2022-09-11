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
if ((ch != 'q') && (ch != 'e'))
{putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
