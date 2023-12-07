#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: the key
 * @size: the array's capacity
 *
 * Description: takes the key and return the index where the key is
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
