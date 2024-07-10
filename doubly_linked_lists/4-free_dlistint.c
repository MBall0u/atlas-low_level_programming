#include "lists.h"
/**
* free_dlistint - frees the lists memory
* Description - starts at the head node and goes one
* by one freeing the allocated memory of each node
* @head: the head node passed to the function
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
