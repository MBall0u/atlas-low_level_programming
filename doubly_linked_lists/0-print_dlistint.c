#include "lists.h"
/**
* print_dlistint - prints all elements in a linked list
* Description - starts at the head node passed to the function and
* iterates through the doubly linked list and prints the elements
* @h: the head node passed to the function
* Return: amount of elements
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
