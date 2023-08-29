#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *               of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n:  integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *two;

	two = malloc(sizeof(listint_t));
	if (two == NULL)
		return (NULL);

	two->n = n;
	two->next = *head;

	*head = two;

	return (two);
}
