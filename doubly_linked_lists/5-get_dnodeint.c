#include "lists.h"
/**
* get_dnodeint_at_index - retrieves the nth node of a list
* Description - starts at the head node, and interates to
* the nth node in the doubly linked list
* @head: the head node passed to the function
* @index: the nth node that is to be returned
* Return: node in position index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n_counter;
	dlistint_t *temp = head;

	for (n_counter = 0; n_counter < index; n_counter++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
