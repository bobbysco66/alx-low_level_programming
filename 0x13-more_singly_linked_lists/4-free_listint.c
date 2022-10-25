#include "lists.h"
/**
 * free_listint - this function frees a list
 * @head: the pointer that points to the struct
 * Return: the adress of the new element
 */
void free_listint(listint_t *head)
{
listint_t *p;
while (head != NULL)
{
p = head;
head = head->next;
free(p);
}
}
