#include "lists.h"
/**
 * free_listint2 - frees dynamically allocated memory
 * Description - starts at the head node and free's dynamically allocated memory
 * node by node and then sets the head node to NULLL
 * @head: the head node passed as an argument
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		*head = NULL;
	}
	else
	{
		printf("Freed !\n");
	}
}
