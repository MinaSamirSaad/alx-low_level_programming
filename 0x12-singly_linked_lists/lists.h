#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct list_t - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX project
 */
typedef struct list_t
{
char *str;
int len;
struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif
