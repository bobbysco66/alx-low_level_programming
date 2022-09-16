#include "main.h"
#include <stdio.h>
/**
 *_isdigit - Entry point
 *@c:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{return (1); }
else
{return (0); }
}
