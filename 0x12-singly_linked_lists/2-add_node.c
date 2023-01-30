#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to linked list
 * @str: string to be added to beginning of list
 * Return: the address of the new head
*/

list_t *add_node(list_t **head, const char *str)
{
    list_t *new_head;
	size_t nchar;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);

	new_head->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new_head->len = nchar;
	new_head->next = *head;
	*head = new_head;

	return (*head);
}
