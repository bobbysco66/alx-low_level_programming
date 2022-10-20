#include "lists.h"
/**
 * list_len - print all the elements of a list
 * @h: points to the header node
 * Return: unsigned long int that shows total number of nodes in the list
 */
size_t list_len(const list_t *h)
{
size_t nodes = 0;
while (h != NULL)
{
nodes++;
h = h->next;
}
return (nodes);
}
