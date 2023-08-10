#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Function creates array of integers
 * @min: Indicates min range of values stored
 * @max: Indicates max range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int v, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (v = 0; min <= max; v++)
		ptr[v] = min++;

	return (ptr);
}
