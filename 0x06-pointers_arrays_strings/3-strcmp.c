#include "main.h"
#include <stdio.h>
/**
 *_strcmp - Entry point
 *@s1:  is the int that will use for the argument of the function
 *@s2: another one
 *Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
int a = 0;
int b = 0;
while (s1[a] != '\0' && b == 0)
{
b = s1[a] - s2[a];
a++;
}
return (b);
}
