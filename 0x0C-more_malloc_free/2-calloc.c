#include <stdlib.h>
#include "main.h"

/**
 * *_memset - This function is used to fill memory with a constant byte
 * @s: This is the memory area to be filled
 * @b: This is the char to copy
 * @n: Indicates the number of times to copy b
 *
 * Return: Point to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int v;

	for (v = 0; v < n; v++)
	{
		s[v] = b;
	}

	return (s);
}

/**
 * *_calloc - This function allocates memory for an array
 * @nmemb: This is the number of elements in the array
 * @size: This is the size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
