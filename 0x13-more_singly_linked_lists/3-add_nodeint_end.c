#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: p to a p of listint_t type
 * @n: int being passed
 *
 * Return: NULL if fail, otherwise address of new elem
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *root, *new;
int i;

new = malloc(sizeof(listint_t));
i = n;
if (new == NULL)
return (NULL);
new->n = i;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
root = *head;
while (root->next)
root = root->next;
root->next = new;
}
return (new);
}
