#include "lists.h"

/**
 * free_listint - free memory
 * @head: p of listint_t type
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *temp;

if (head == NULL)
return;

temp = head;
while (head)
{
temp = head;
head = head->next;
free(temp);
}
}
