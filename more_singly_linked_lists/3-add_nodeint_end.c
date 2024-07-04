#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end
 * Description - adds a node to the end of the singly
 * linked list and returns the address
 * @head: the head node passed to the function
 * @n: the integer that was passed to the function
 * Return: address of new node (success)
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
