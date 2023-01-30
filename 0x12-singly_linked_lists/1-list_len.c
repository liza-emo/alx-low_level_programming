#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked list_t list
 * @h: pointer to head of linked list
 * Return: number of elements in linked list
*/

size_t list_len(const list_t *h)
{
    int i = 0;

    if (h == NULL)
    {
        return (0);
    }
    while (h != NULL)
    {
        i++;
    }
    return (i);
}