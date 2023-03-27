#include <unistd.h>

/**
 * _putchar - writes char c to std
 * @c: char to be printed
 * Return: return 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
