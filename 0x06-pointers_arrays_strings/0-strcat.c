#include "main.h"
#include <stdio.h>
/**
 *_strcat - Entry point
 *@dest:  is the int that will use for the argument of the function
 *@src: another one
 *Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
int n = 0;
int i = 0;
while (dest[n] != '\0')
{
n++;
}
dest[n] = " ";
while (src[i] != '\0')
{
i++;
}
n = n + 1;
i = i + 1;
tot = n + i;
diff = tot - i;
i = 0;
while (diff < tot)
{
dest[diff] = src[i];
diff++;
i++;
}
return (dest);
}
