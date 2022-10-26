#include "lists.h"
/**
 * free_listint2 - this function frees a list
 * @head: the pointer that points to the struct
 * Return: the adress of the new element
 */
void free_listint2(listint_t **head)
{
listint_t *p, *y;
if (head == NULL)
{
return;
}
p = *head;
while (p != NULL)
{
y = p;
p = p->next;
free(y);
}
*head = NULL;
}
