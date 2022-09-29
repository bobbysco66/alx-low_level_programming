#include "main.h"
#include <stdio.h>
/**
 *factorial - Entry point
 *@n:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
if  (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial (n - 1));
}
}
