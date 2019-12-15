#include "lists.h"

/**
 * free_dlistint - free a dlistint_t type list
 * @head: p to first node of list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

if (head == NULL)
return;
while (head)
{
temp = head;
head = head->next;
free(temp);
}
}
