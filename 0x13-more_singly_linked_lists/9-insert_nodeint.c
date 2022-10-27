#include "lists.h"
/**
 * getsize - get the current size of the list
 * @head: the pointer to the struct
 * Return: size
*/
unsigned int getsize(listint_t *head)
{
unsigned int size = 0;
while (head != NULL)
{
head = head->next;
size++;
}
return (size);
}
/**
 * insert_nodeint_at_index - adds a node at the index
 * @head: the pointer to the struct
 * @idx: the index
 * @n: the data
 * Return: the list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count = 0;
listint_t *new, *temp;
/*unsigned int size = getsize(*head);*/
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
else
{
temp = *head;
while (count < idx - 1)
{
if (temp == NULL || temp->next == NULL)
{
return (NULL);
}
temp = temp->next;
count++;
}
new->next = temp->next;
temp->next = new;
}
return (new);
}
