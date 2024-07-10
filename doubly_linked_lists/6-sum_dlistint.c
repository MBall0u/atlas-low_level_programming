#include "lists.h"
/**
 * sum_dlistint - adds all of the elements in the list together
 * Description - starts at the head node and iterates through the
 * doubly linked list to get the sum and return the total
 * @head: head node passed to function
 * Return: sum total
*/
int sum_dlistint(dlistint_t *head)
{
	int res = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		res += temp->n;
		temp = temp->next;
	}
	return (res);
}
