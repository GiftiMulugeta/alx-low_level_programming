#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - return index
 * @array: array of integer
 * @size: size of an array
 * @cmp: function pointer
 * Return: return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int  i;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (-1);
	}
	if (i == size)
		return (-1);
	return (-1);
}
