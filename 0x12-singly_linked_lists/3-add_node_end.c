#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the linked list.
 * @str: string to append to the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_head, *tmp;
	size_t nchar;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);

	new_head->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new_head->len = nchar;
	new_head->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new_head;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_head;
	}

	return (*head);
}
