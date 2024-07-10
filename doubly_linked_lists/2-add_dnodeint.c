#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of a list
* Description - starts by initializing a new node as the head
* and then when it is called again it moves the head node down
* and adds the new node as the head
* @head: the head node passed to the function
* @n: the data being stored in the new node that is created
* Return: address of new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		new->next = temp;
		*head = new;
		temp->prev = *head;
	}
	return (new);
}
