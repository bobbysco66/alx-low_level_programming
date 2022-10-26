#include "lists.h"
/**
 * sum_listint - this function sums data in a list
 * @head: the pointer to the struct
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *p;
if (head == NULL)
{
return (0);
}
p = head;
while (p != NULL)
{
sum = sum + p->n;
p = p->next;
}
return (sum);
}
