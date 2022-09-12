#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char start = 'a';
char end = 'f';
char ch = start;
for (i = 0; i < 10; i++)
putchar(i + '0');
while (ch <= end)
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
