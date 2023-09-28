#include "main.h"

/**
 * clear_bit - sets value of bit
 *
 * @n: pointer
 * @index: Index
 *
 * return: If error occurs -1, Otherwise 1.
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
