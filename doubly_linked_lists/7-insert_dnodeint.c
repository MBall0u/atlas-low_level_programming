#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node in the nth position
 * Description - starts at the head node and moves to the nth
 * position and adds a new node
 * @h: the head node passed to the function
 * @idx: the nth position
 * @n: the data to be included in the new node
 * Return: the new node address
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter1, counter2;
	dlistint_t *temp = *h;
	dlistint_t *new;
	dlistint_t *after_temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	for (counter1 = 1; counter1 < idx; counter1++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	for (counter2 = 0; counter2 < idx; counter2++)
	{
		after_temp = after_temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	after_temp->prev = new;
	return (new);
}
