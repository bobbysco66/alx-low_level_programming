#include "lists.h"
/**
 * listint_len - prints the number of elements of a list
 * @h: points to the header node
 * Return: the number of nodes in list
 */
size_t listint_len(const listint_t *h)
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
size++;
h = h->next;
}
return (size);
}
