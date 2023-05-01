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


#endif
