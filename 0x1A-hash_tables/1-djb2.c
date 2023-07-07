#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
/*
* It takes a string and returns an unsigned long int.
* It sets the hash to 5381.
* It loops through the string, setting c to the current
* character and incrementing the pointer to point to the next character.
* It sets the hash to the previous hash value
* times 33 plus the current character.
* It returns the hash.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
