#include "main.h"
/**
 *_memcpy - The _memcpy() function copies n bytes
 *from memory area to src to memory area dest
 *@dest: area where bytes are copied to
 *@src: area where bytes are copied from
 *@n:show number of bytes to copy
 *Return: return a pointer to n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	for (; j < n; j++)
		dest[j] = src[j];

	return (dest);
}
