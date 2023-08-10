#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - This function reallocates a memory block using malloc and free
 * @ptr: Used as a pointer to the memory previsouly allocated by malloc
 * @old_size: Indicates the size of the allocated memory for ptr
 * @new_size: Indicates the new size of the new memory block
 *
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int v;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (v = 0; v < new_size; v++)
			ptr1[v] = old_ptr[v];
	}

	if (new_size > old_size)
	{
		for (v = 0; v < old_size; v++)
			ptr1[v] = old_ptr[v];
	}

	free(ptr);
	return (ptr1);
}
