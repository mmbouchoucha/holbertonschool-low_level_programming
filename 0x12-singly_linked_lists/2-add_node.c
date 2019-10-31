#include "lists.h"
#include <string.h>

/**
 * _strlen - find length of string
 * @s: pointer to  string
 *
 * Return: length of s
 */
int _strlen(const char *s)
{
int l;

l = 0;
while (*(s++) != '\0')
l++;
return (l);
}

/**
 * add_node - add new node to beginning of a list_t type list
 * @head: p to a p of the type list_t
 * @str: p of the type const char, needs to be duplicated
 *
 * Return: NULL if fail, or address of new elem
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = _strlen(str);
new->next = *head;
*head = new;
return (*head);
}
