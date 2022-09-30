#include "main.h"
#include <stdio.h>
/**
 *optimus_prime - Entry point
 *@s:  is the int that will use for the argument of the function
 *@j: incrementor
 * Return: Always 0 (Success)
 */
int optimus_prime(int s, int j)
{
if ((j < 0) || (j == 1))
{
return (0);
}
else if (s >= j)
{
return (1);
}
else if (j % s == 0)
{
return (0);
}
else
{
return (optimus_prime(s + 1, j));
}
}
/**
 *is_prime_number- Entry point
 *@n:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
int a = 2;
return (optimus_prime(a, n));
}
