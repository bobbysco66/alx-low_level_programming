#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *_strlen - Entry point
 *@s:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
int _strlen(const char *s)
{
int c = 0;
while (*s != '\0')
{
c++;
s++;
}
return (c);
}
/**
 * add_node_end - add node to the end of a list
 * @head: points to the header node
 * @str: the string to add
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *last = *head;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
new->len = _strlen(str);
if (*head == NULL)
{
*head = new;
return (*head);
}
while (last->next != NULL)
{
last = last->next;
}
last->next = new;
return (*head);
}
