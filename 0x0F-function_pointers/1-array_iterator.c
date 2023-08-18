#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Function prints each array elem on a newl
 * @array: Indicates thearray
 * @size: Amount of elem to print
 * @action: Pointer to print in hex or regular
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int v;

	if (array == NULL || action == NULL)
		return;

	for (v = 0; v < size; v++)
	{
		action(array[v]);
	}
}
