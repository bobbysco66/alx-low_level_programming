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
int i = 0;
while (i < (argc - 1))
{
i++;
}
if (i == 2)
{
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int k = a * b;
printf("%d\n", k);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
