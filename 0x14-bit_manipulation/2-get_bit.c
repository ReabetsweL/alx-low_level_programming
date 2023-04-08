#include "main.h"

/**
 * get_bit - value os a bit at given index.
 * @n: decimal parameter.
 * @index: index.
 * Reaturn: val
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}
