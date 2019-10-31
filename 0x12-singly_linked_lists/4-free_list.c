#include "lists.h"

/**
 * free_list - free memeory
 * @head: p of type list_t
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *temp;

if (head == NULL)
return;
temp = head;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
