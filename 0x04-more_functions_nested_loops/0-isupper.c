#include "main.h"
#include <stdio.h>
/**
 *_isupper - Entry point
 *@c:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{return (1); }
else
{return (0); }
}
