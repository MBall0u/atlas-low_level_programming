#include "lists.h"
/**
 * list_len - counts the number of non-NULL strings
 * in a singly linked list
 * Description - counts the number of non-NULL strings
 * are in a singly linked list and returns it to the
 * main function
 * @h: the head node that is passed from the main function
 * Return: element count (success)
*/
size_t list_len(const list_t *h)
{
	int el_count = 0; /* element counter */

	while (h != NULL)
	{
		if (h->str != NULL)
			el_count++;
		h = h->next;
	}
	return (el_count);
}