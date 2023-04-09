#include "main.h"

/**
 * _memset - shows entry point
 *@s: shows destination
 *@b: constant byte
 *@n: byte
 * Return: always 0 if succefull
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
