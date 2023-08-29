#include "lists.h"

/**
 * free_listint2 - to free a listint_t list.
 * @head: the  pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: to sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;

	while (*head)
	{
		new  = (*head)->next;
		free(*head);
		*head = new;
	}

	head = NULL;
}
