#include "main.h"
#include <stdio.h>
/**
 *_strlen - Entry point
 *@s:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
int c = 1;
for (*s != '\0'; *s++)
{
c++;
}
return (c);
}
