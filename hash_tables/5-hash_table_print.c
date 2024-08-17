#include "hash_tables.h"
/**
 * hash_table_print - see below
 * Description - takes a hash table and prints a formatted
 * output
 * @ht: the hash table
 * Return: Void
*/
void hash_table_print(const hash_table_t *ht)
{
	long unsigned int index, comma = 0;
	hash_node_t *temp;

	printf("{");
	if (ht)
	{
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index])
			{
				if (comma != 0)
					printf(", ");
				temp = ht->array[index];
				printf("'%s': '%s'", temp->key, temp->value);
				comma++;
			}
			if (temp->next)
			{
				while (temp->next)
				{
					if (comma != 0)
						printf(", ");
					temp = temp->next;
					printf("'%s': '%s'", temp->key, temp->value);
					comma++;
				}
			}
		}
	}
	printf("}");
	putchar('\n');
}
