#include <stdio.h>
#include "dog.h"
#include <math.h>
/**
 * print_dog - print the struct dog.
 * @d: The dog to be initialized.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
{
printf("Name: %s\n", d->name);
}
else
{
printf("Name: (nil)\n");
}
if (isnan(d->age))
{
printf("Age: (nil)\n");
}
else
{
printf("Age: %.1f\n", d->age);
}
if (d->owner != NULL)
{
printf("Owner: %s\n", d->owner);
}
else
{
printf("Owner: (nil)\n");
}
}
}
