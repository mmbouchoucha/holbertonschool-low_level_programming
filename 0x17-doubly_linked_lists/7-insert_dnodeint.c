#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position in a
 * dlistint_t type list
 * @h: p to p to head of list
 * @idx: index of where the new node should be added, starting from 0
 * @n: value of new node
 *
 * Return: address of new node, or NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *target, *prev;
unsigned int i;

if (*h == NULL)
return (NULL);
target = *h;
new = malloc(sizeof(*new));
if (new == NULL)
return (NULL);
if (*h)
{
prev = NULL;
i = 0;
while (target && i < idx)
{
prev = target;
target = target->next;
i++;
}
if (i == idx)
{
new->n = n;
new->prev = prev;
if (target)
target->prev = new;
new->next = target;
if (idx != 0)
prev->next = new;
else
*h = new;
return (new);
}
return (NULL);
}
new->n = n;
new->next = NULL;
new->prev = NULL;
*h = new;
return (new);
}
