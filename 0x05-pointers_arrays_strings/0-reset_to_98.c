#include "main.h"
#include <stdio.h>
/**
 *reset_to_98 - Entry point
 *@n:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
void reset_to_98(int *n)
{
int var = 98;
n = &var;
*n = var;
}
