#ifndef LINKED
#define LINKED
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node struct
 * for Holberton project
 */
typedef struct listint_s
{
  int n;
  struct listint_s *next;
} listint_t;

/**
 * listprt_s - singly linked list
 * @store: p to store
 * @next: next p to node
 */
typedef struct listptr_s
{
  void *store;
  struct listptr_s *next;
} listptr_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
size_t check_node(listptr_t **head, const listptr_t *n);
void free_node(listptr_t *head);

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: p to a p to a linked list
 * @index: position to insert new node
 * @n: value of new node
 *
 * Return: NULL if fail, otherwise address of new elem
 */
listint_t *insert_nodeint_at_index(listint_t **head,
				   unsigned int index, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);

#endif /* #ifndef LINKED */
