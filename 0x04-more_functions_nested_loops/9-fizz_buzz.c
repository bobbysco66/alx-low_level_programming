#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100
 * Return: Always 0.
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}
else if ((i % 3) == 0)
{
printf("Fizz");
putchar(' ');
}
else if ((i % 5) == 0)
{
printf("Buzz");
putchar(' ');
}
else
{
putchar(i + '0');
putchar(' ');
}
if (i == 100)
{
continue;
}
}
printf("\n");
return (0);
}
