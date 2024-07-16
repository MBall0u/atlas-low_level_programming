#include "hash_tables.h"
/**
 * hash_table_set - sets a value into the hash table
 * Description - gets the index of the give key based on
 * the hash table that is passed to it and then places
 * the given value into it or if there is a collision it
 * chains it onto the index in the table
 * @ht: the hast table that is passed to it
 * @key: the key that is passed from main
 * @value: the value to be inserted into the table
 * Return: Always 1 (success)
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *new, *checker;

	if (!ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	checker = ht->array[index]

	if (checker == NULL)
	{
		checker = new;
	}
	else
	{
		while (checker != NULL)
		{
			if (strcmp(checker->key, key) == 0)
			{
				checker->value = strdup(value);
				return (1);
			}
			temp = checker;
			checker = temp->next;
		}
		temp->next = new;
	}
	return (1);
}
