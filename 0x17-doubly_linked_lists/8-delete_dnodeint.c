#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a specific node in a dlistint_t type list
 * @head: p to a p to the first node in the list
 * @index: index of the node to delete, start at 0
 *
 * Return: 1 if success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *node, *target;
unsigned int i;

if (*head == NULL)
return (-1);
i = 0;
node = *head;
while (node && i < index)
{
node = node->next;
i++;
}
if (i < index)
return (-1);
if (i == 0 && node->next)
{
target = node;
node = node->next;
node->prev = NULL;
*head = node;
free(target);
return (1);
}
else if (i > 0)
{
target = node;
node = node->prev;
node->next = target->next;
free(target);
}
else
{
*head = node->next;
free(node);
}
return (1);
}
