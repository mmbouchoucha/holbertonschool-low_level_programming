#include "lists.h"

/**
 * get_dnodeint_at_index - locat the nth node of a dlistint_t type list
 * @head: p to first node in list
 * @index: index of the node to locate
 *
 * Return: the node at location @index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *target;
unsigned int i;

target = head;
if (head == NULL)
return (NULL);
if (target->next)
{
i = 0;
while (i < index)
{
target = target->next;
i++;
}
return (target);
}
return (NULL);
}
