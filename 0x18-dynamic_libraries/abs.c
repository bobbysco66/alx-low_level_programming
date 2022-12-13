#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */

int _abs(int n)
{
  if (n >= 0)
    {
      return (n);
    }
  else
    {
      return (-n);
    }
}

/**
 * *_strcpy - check the code for Holberton School students.
 *@dest : destination pointer
 *@src : source pointer
 * Return: Always dest
 */
char *_strcpy(char *dest, char *src)
{
  int c, i;

  for (i = 0; src[i] != '\0'; i++)
    {
    }
  c = i;

  for (i = 0; i <= c; i++)
    {
      dest[i] = src[i];
    }
  return (dest);
}
int _atoi(char *s)
{
  return (0);
}
