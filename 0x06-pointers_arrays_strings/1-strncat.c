#include "main.h"
#include <stdio.h>
/**
 *_strcat - Entry point
 *@dest:  is the int that will use for the argument of the function
 *@src: another one
 *Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
int k = 0;
int i = 0;
int tot = 0;
int diff = 0;
while (dest[k] != '\0')
{
k++;
}
while (src[i] != '\0')
{
i++;
}
if ( n >= i)
{
n = i;
}
else
{
n = n;
}
tot = k + n;
diff = tot - n;
i = 0;
while (diff < tot)
{
dest[diff] = src[i];
diff++;
i++;
}
/*printf("diff value = %d", diff);*/
/*printf("total value = %d", tot);*/
return (dest);
}
