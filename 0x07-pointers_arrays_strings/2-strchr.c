#include "main.h"
#include <stdio.h>
/**
 * _strchr - fills memory with constant byte
 * @s: string
 * @c: character
 * Return:the character
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
i++;
if (s[i] == c)
{
return (&s[i]);
}
}
return ('\0');
}
