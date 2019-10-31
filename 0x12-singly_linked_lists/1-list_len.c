#include "lists.h"

/**
 * list_len - count the num of elem in a linked list
 * @h: pointer of type const list_t, to linked list
 *
 * Return: number of elem
 */
size_t list_len(const list_t *h)
{
int i;
const list_t *temp;

temp = h;
i = 0;
if (temp != NULL)
{
while (temp->next != NULL)
{
temp = temp->next;
i++;
}
i++;
}
return (i);
}
