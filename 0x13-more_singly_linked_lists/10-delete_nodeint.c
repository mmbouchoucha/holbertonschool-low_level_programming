#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index @index of @head
 * @head: p to a p to a linked list
 * @index: loc to delete elem
 *
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
  listint_t *target, *temp;
  unsigned int i;

  target = *head;
  if (target)
    {
      if (index == 0)
	{
	  temp = target->next;
	  free(target);
	  *head = temp;
	  return (1);
	}
      else
	{
	  i = 0;
	  while (i < (index - 1))
	    {
	      target = target->next;
	      if (target == NULL && index - i > 0)
		return (-1);
	      i++;
	    }
	  temp = target;
	  target = target->next;
	  i++;
	  if (i == index)
	    {
	      temp->next = target->next;
	      free(target);
	      return (1);
	    }
	}
    }
  return (-1);
}
