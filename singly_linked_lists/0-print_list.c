#include "lists.h"
/**
 * print_list - prints the contents of a node
 * Description - prints the contents of every node in
 * a singly linked list and then returns the amount of nodes
 * @h: the head node passed to the function
 * Return: node count (success)
*/
size_t print_list(const list_t *h)
{
	int n_count = 0; /* node counter */

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		n_count++;
		h = h->next;
	}
	return (n_count);
}