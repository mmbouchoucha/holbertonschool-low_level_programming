#include "lists.h"

/**
 * add_dnodeint_end - add a new node to end of dlistint_t type list
 * @head: pointer to a p to list
 * @n: value of new node
 *
 * Return: address of the new elem, or NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *root, *new;

new = malloc(sizeof(*new));
if (new == NULL)
return (NULL);
root = *head;
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
while (root->next)
root = root->next;
new->prev = root;
root->next = new;
return (new);
}
