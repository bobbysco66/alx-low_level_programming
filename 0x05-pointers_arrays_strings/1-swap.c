#include "main.h"
#include <stdio.h>
/**
 *swap_int - Entry point
 *@a:  is the int that will use for the argument of the function
 *@b: second int
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
int hold = *a;
*a = *b;
*b = hold;
}
