#include "lists.h"
/**
 * pop_listint - this function deletes header in a list
 * @head: the pointer to the struct
 * Return: the data in header
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp, *y;
temp = *head;
if (temp == NULL)
{
return (0);
}
data = temp->n;
y = temp->next;
free(temp);
*head = y;
return (data);
}
