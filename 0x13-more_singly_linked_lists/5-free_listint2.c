#include "lists.h"

/**
 * free_listint2 - free memory, set head to NULL
 * @head: p to a p of listint_t type, start point
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *temp, *next;

if (head)
{
temp = *head;
while (temp)
{
next = temp;
temp = temp->next;
free(next);
}
*head = NULL;
}
}
