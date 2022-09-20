#include "main.h"
#include <stdio.h>
/**
 *_strlen - Entry point
 *@s:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
int c = 0;
while (*s != '\0')
{
c++;
}
return (c);
}
