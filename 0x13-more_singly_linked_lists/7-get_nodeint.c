#include "lists.h"
/**
 * get_nodeint_at_index - gets a node at index
 * @head: the pointer that points to the struct
 * @index: the index
 * Return: the data at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *data;
unsigned int count = 0;
if (head == NULL)
{
return (NULL);
}
data = head;
while (count != index)
{
if (data == NULL)
{
return (NULL);
}
data = data->next;
count++;
}
return (data);
}
