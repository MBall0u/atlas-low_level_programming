#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node in a specified position
 * Description - is given the position of a node (index) and deletes it
 * @head: the head node passed as an argument
 * @index: the position of the node that needs to be deleted
 * Return: 1 (success)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp2;
	listint_t *temp3;
	int count;

	if (index < 0)
		return (-1);
	else if (index == 0)
	{
		temp2 = temp->next;
		*head = temp2;
	}
	else
	{
		for (count = 1; count < index; count++)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
		}
		temp2 = temp;
		temp = temp->next;
		temp3 = temp->next;
		temp2->next = temp3;
	}
	free (temp);
	return (1);
}
