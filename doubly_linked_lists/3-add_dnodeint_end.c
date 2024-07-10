#include "lists.h"
/**
* add_dnodeint_end - adds a new node to the end of a list
* Description - starts by setting the first new node as the head
* then proceeds to add each new node to the end
* @head: the head node passed to the function
* @n: the data that is going into the new node
* Return: the address of the new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
