#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: p to p of dlistint_t type list
 * @n: value of new node
 *
 * Return: the address of new element, or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(*new));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = *head;
if (*head)
(*head)->prev = new;
*head = new;
return (*head);
}
