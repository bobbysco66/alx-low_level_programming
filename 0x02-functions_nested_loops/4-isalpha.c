#include "main.h"
#include <stdio.h>
/**
 *_isalpha - Entry point
 *@c:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{return (1); }
else if (c >= 'A' && c <= 'Z')
{return (1); }
else
{return (0); }
}
