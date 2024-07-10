#include "lists.h"
/**
* dlistint_len - counts the number of elements in a list
* Description - iterates through a doubly linked list and
* returns the number of elements
* @h: the head node passed to the function
* Return: the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
