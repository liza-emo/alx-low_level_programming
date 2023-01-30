#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of list to be printed
 * Return: number of nodes in linked list
*/
size_t print_list(const list_t *h)
{
    size_t i = 0;

    if (h == NULL)
    {
        printf("[0] (nil)\n");
    }
    while (h != NULL)
    {
        printf("[%u] %s\n", h ->len, h->str);
        h = h -> next;
        i++;
    }
    return (i);
}