#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/*DATA STRUCTURES*/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;


/*FUNCTION PROTOTYPES*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);

#endif /*MAIN_H*/
