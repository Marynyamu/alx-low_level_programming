#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the new created array.
 * if man > mix, returns NULL.
 * if malloc fail, returns NULL.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
