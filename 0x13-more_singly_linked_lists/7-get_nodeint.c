#include "lists.h"

/**
 * get_nodeint_at_index - function function.
 * @head: input.
 * @index: index to return.
 * Return: NUll
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

listint_t *temp;

while (head)
{
temp = head;
if (index == i)
return (temp);
head = head->next;
i++;
}
return (NULL);
}
