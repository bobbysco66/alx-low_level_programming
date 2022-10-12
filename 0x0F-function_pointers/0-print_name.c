#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print the name
 * @f: The pointer to the function
 * @name: The name
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
}
