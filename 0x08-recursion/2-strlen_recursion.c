#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - Entry point
 *@s:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
