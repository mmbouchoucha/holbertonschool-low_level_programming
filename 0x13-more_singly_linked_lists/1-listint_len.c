#include "lists.h"

/**
 * listint_len - determine the num of elem in a linked listint_t list
 * @h: p of const listint_t type
 *
 * Return: num of elem
 */
size_t listint_len(const listint_t *h)
{
int i;

i = 0;
if (h)
{
while (h->next)
{
h = h->next;
i++;
}
i++;
}
return (i);
}
