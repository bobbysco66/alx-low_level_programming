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
int i;
int tot = 0;
if (argc == 1)
{
printf("%d\n", 0);
return (0);
}
for (i = 1; i < argc ; i++)
{
tot = tot + atoi(argv[i]);
if (atoi(argv[i]) == 0)
{
printf("Error\n");
return (1);
}
}
printf("%d\n", tot);
return (0);
}
