#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Node data.
 * Return: Address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	tmp->prev = NULL;

	if (*head != NULL)
		(*head)->prev = tmp;

	*head = tmp;
	return (tmp);
}
