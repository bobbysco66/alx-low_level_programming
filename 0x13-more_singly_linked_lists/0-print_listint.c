#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: points to the header node
 * Return: the number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
size_t size = 0;
if (h == NULL)
{
return (size);
}
else
{
size = 1;
}
while (h->next != NULL)
{
printf("%d\n", h->n);
size++;
h = h->next;
}
printf("%d\n", h->n);
return (size);
}
