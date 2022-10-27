#include "main.h"
/**
 *_strlen - Entry point
 *@s:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
int _strlen(const char *s)
{
int c = 0;
while (*s != '\0')
{
c++;
s++;
}
return (c);
}
/**
 * power - power function
 * @base:base
 * @exponent:exponent
 * Return: the power
 */
int power(int base, int exponent)
{
int result = 1;
while (exponent > 0)
{
result = result *base;
exponent--;
}
return (result);
}

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: a string of 0 and 1 chars
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
int size = _strlen(b);
int i, temp;
int sum = 0;
unsigned int dec_value = 0;
unsigned int last_digit = 0;
unsigned int exp = 0;
if (b == NULL)
{
return (0);
}
for (i = 0; i < size; i++)
{
if (*b >= '0' && *b <= '9')
{
sum = sum * 10 + (*b - 48);
b++;
}
else
{
return (0);
}
}
temp = sum;
while (temp != 0)
{
last_digit = temp % 10;
if ((last_digit != 1) && (last_digit != 0))
{
return (0);
}
else
{
temp = temp / 10;
dec_value += last_digit *power(2, exp);
exp++;
}
}
return (dec_value);
}
