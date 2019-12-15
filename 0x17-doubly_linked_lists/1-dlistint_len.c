#include "lists.h"

/**
 * dlistint_len - return num of elem in a dlistint_t type list
 * @h: p to list to analyze
 *
 * Return: num of elem in the @h list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t node_count;
const dlistint_t *temp;

temp = h;
node_count = 0;
if (temp)
{
while (temp->next)
{
temp = temp->next;
node_count++;
}
node_count++;
}
return (node_count);
}
