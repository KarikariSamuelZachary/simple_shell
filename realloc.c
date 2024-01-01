#include "shell.h"

/**
 * _realloc - Reallocates a memory block using malloc and copies the content.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the old memory block.
 * @new_size: Size of the new memory block.
 *
 * Return: Pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void *new_ptr;
	char *src;
	char *dest;
	size_t i;
	size_t min_size;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	new_ptr = malloc(new_size);
	if (new_ptr != NULL)
	{
		src = (char *)ptr;
		dest = (char *)new_ptr;
		min_size = old_size < new_size ? old_size : new_size;

		for (i = 0; i < min_size; ++i)
		{
			dest[i] = src[i];
		}

		free(ptr);
	}

	return (new_ptr);
}
