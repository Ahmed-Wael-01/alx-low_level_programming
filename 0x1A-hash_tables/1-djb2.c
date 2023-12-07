#include "hash_tables.h"

/**
 * hash_djb2 - djb2 hash algorithm
 * @str: the string to which will be a hash
 *
 * Description: function for making a hash using djb2 algorithm
 * Return: the hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
