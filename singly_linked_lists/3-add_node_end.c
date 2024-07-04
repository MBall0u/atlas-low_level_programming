#include "lists.h"
/**
 * add_node_end - adds new nodes to the end of the singly linked list
 * Description - adds a new node to the back of singly linked list
 * and then returns the address of the new node
 * @head: the head node passed to the function
 * @str: the string passed as an argument to the function
 * Return: the address of the new node (success)
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
/**
 * _strlen - counts the amount of characters in a string
 * Description - counts the number of characters that are in
 * a string and returns the count to the calling function
 * @s: provided string passed as argument
 * Return: count (success)
*/
int _strlen(const char *s)
{
	int count = 0; /* character count */

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
