#include "hash_tables.h"
/**
 * key_index - returns the index of the given key
 * Description - returns the specific position in
 * hash table that the given key is stored
 * @key: the give key
 * @size: the given size of the array
 * Return: the idex position of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key)) % size);
}