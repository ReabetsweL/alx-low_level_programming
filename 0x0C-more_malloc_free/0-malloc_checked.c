#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes allocated.
 *
 * Return: A pointer to the located memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if(mem == NULL)
		exit(98);

	return (mem);
}
