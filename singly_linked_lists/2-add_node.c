#include "lists.h"
/**
 * add_node - adds a new node to the singly linked list
 * Description - adds a new node, copies the string,
 * calculates the string length and adds that to the
 * node as well
 * @head: the head node passed to the function
 * @str: the string passed to the function as an argument
 * Return: 0 (success)
*/
list_t *add_node(list_t **head, const char *str)
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
	return (&head);
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
