#include "main.h"
#include <stdio.h>
/**
 *reverse_array - Entry point
 *@a:  is the int that will use for the argument of the function
 *@n: another one
 *Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
int v = 0;
int len = n - 1;
int temp = 0;
while (v < len)
{
temp = a[v];
a[v] = a[len];
a[len] = temp;
v++;
len--;
}
}
