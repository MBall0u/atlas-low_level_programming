#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value
 * Description - takes an inputted hash table and a key
 * and finds the value associated with it
 * @ht: inputted hash table
 * @key: the passed key
 * Return: the value of the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **array, *temp;

	index = key_index((const unsigned char *)key, ht->size);
	array = ht->array;

	temp = array[index];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}