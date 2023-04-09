#include "main.h"

/**
 * _abs - compute absolute value of an int
 * @a: received int
 * Return: 1
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
