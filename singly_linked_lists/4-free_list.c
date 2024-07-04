#include "lists.h"
/**
 * free_list - frees allocated memory
 * Description - goes through the singly linked list
 * and frees the memory that was dynamically allocated
 * @head: points to the head node in the singly linked list
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
