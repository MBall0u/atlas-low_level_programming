#include "lists.h"
/**
 * free_listint - frees allocated memory for the nodes
 * Description - goes node by node freeing the dynamically
 * allocated memory until everthing is free'd
 * @head: the head node passed as an argument
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}