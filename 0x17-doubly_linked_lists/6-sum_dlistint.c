#include "lists.h"

/**
 * sum_dlistint - sum the data locat in a dlistint_t type list
 * @head: first node in list
 *
 * Return: sum of data in list locat @head, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum;

if (head == NULL)
return (0);
sum = 0;
while (head->next)
{
sum += head->n;
head = head->next;
}
sum += head->n;
return (sum);
}
