#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at the given index.
 * @head: Double pointer to the head of the list.
 * @index: Position of the node to delete.
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *prev_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	while (tmp != NULL && i < index)
	{
		prev_node = tmp;
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (-1);

	if (tmp == *head)
		*head = tmp->next;
	else
		prev_node->next = tmp->next;

	if (tmp->next != NULL)
		tmp->next->prev = prev_node;

	free(tmp);
	return (1);
}
