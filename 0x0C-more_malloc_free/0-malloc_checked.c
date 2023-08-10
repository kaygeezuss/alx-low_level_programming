#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - This function allocates memory using malloc
 * @b: Indicates the  number of bytes to be allocated
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
