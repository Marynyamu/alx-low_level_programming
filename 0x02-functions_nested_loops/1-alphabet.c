#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * Description: use _putchar only twice
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z' ; i++)

		_putchar(i);
	_putchar('\n');
}
