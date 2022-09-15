#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long fib3 = 0, fib4 = 1, sum;
for (count = 0; count < 50; count++)
{
sum = fib3 + fib4;
printf("%lu", sum);
fib3 = fib4;
fib4 = sum;
if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
