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
 * add_node_end - add a new node to the end of a list_t type list
 * @head: pointer to a pointer of type list_t
 * @str: pointer of type const char, needs to be duplicated
 *
 * Return: NULL if faillure, new address of head otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
  list_t *new, *temp;

  new = malloc(sizeof(list_t));
  if (new == NULL)
    return (NULL);
  new->str = strdup(str);
  new->len = _strlen(str);
  new->next = NULL;
  if (*head == NULL)
    *head = new;
  else
    {
      temp = *head;
      while (temp->next != NULL)
	temp = temp->next;
      temp->next = new;
    }
  return (new);
}
