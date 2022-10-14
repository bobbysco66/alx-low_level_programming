#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - print string
 * @n: number of parameters received
 * @separator: the seperator
 * Return: 0 if n is 0 of the sum of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *str;
va_start(ap, n);
for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("%p", str);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(ap);
printf("\n");
}
