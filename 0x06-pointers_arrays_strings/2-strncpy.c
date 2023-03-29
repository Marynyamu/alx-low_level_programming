#include "main.h"

/**
 * *_strcat - appends a string to another
 * overwrite the terminating null byte
 * @dest: to be appended into
 * @src: string to copy from
 * Return: dest after appending
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
