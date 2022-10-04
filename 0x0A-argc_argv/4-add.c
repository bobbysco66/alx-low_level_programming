#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - writes the character c to stdout
 * @argc: The number of arguments
 * @argv: the strings in an array form
 *Return: On success 1.
 */
int main(int argc, char *argv[])
{
int num, digit, sum = 0;
for (num = 1; num < argc; num++)
{
for (digit = 0; argv[num][digit]; digit++)
{
if (argv[num][digit] < '0' || argv[num][digit] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[num]);
}
printf("%d\n", sum);
return (0);
}
