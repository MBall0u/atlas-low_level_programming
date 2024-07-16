#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * Description - takes in the size of the hash table as
 * an argument and allocates memory for the table and
 * then each node or space in the array
 * @size: the size of the hash table
 * Return: the hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
	if(!table->array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
		table->size[i] = NULL;
	}

	return (table);
}
