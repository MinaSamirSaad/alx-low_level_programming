#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_t - singly linked list
 * @n: value of number
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX project
 */
typedef struct listint_t
{
int n;
struct listint_t *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);

#endif
