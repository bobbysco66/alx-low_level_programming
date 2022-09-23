#include "main.h"
#include <stdio.h>
/**
 *string_toupper - Entry point
 *@str:  is the int that will use for the argument of the function
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
