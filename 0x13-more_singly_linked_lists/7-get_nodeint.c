#include "lists.h"

/**
 * get_nodeint_at_index - find and return the nth node of a listint_t list
 * @head: p to linked list
 * @index: node to look for (i.e. the nth node)
 *
 * Return: loc of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *target;
unsigned int i;

if (head == NULL)
return (NULL);
target = head;
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
