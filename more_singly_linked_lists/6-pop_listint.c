#include "lists.h"
/**
 * pop_listint - clears the head node
 * Description - takes the head node as an arugment and then
 * stores its data, frees the node, and returns the data
 * @head: the head node passed to the function
 * Return: free'd nodes data
*/
int pop_listint(listint_t **head)
{
	int temp_int = (*head)->n;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	free(temp);
	return (temp_int);
}
