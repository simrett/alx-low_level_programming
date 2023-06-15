#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at the given index.
 * @head: Double pointer to the head of the list.
 * @index: Position of the node to delete.
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *head2;
	unsigned int i = 0;

	tmp = *head;
	if (tmp != NULL)
		while (tmp->prev != NULL)
			tmp = tmp->prev;
	while (tmp != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = tmp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = tmp->next;
				if (tmp->next != NULL)
					tmp->next->prev = head2;
			}
			free(tmp);
			return (1);
		}
		head2 = tmp;
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
