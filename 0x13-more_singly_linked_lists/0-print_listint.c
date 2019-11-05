#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elem of a listint_t list
 * @h: p of const listint_t type
 *
 * Return: num of elem
 */
size_t print_listint(const listint_t *h)
{
int i;

i = 0;
if (h)
{
while (h->next)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
printf("%d\n", h->n);
i++;
}
return (i);
}
