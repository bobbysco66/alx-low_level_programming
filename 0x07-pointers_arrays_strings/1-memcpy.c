#include "main.h"
#include <stdio.h>
/**
 * _memcpy - fills memory with constant byte
 * @dest: pointer to the memory area
 * @src: bytes of memory
 * @n: constant byte
 *
 * Return: the memory area of s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
