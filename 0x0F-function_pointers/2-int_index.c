#include "function_pointers.h"

/**
*int_index - search for an integer
*@array: Array containing element
*@size:shows number of elements in array
*@cmp: function which compares values
*
*Return: returns -1 if no element matchs
*return pointer to the first corresponding element
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int index = 0;

if (array == NULL || cmp == NULL)
return (-1);

for (; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}

return (-1);

}
