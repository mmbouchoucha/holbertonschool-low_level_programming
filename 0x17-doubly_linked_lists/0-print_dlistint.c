#include "lists.h"

/**
 * print_dlistint - print all elem of a dlistint_t type list
 * @h: p to list to print
 *
 * Return: num of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
int node_count;
const dlistint_t *temp;

temp = h;
node_count = 0;
if (temp)
{
while (temp->next)
{
printf("%d\n", temp->n);
temp = temp->next;
node_count++;
}
printf("%d\n", temp->n);
node_count++;
}
return (node_count);
}
