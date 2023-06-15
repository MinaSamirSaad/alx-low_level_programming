#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct dlistint_t - double linked list
 * @n: value of number
 * @next: points to the next node
 *@prev: points to the previous node
 * Description: double linked list node structure
 * for ALX project
 */
typedef struct dlistint_t
{
int n;
struct dlistint_t *next;
struct dlistint_t *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);


#endif
