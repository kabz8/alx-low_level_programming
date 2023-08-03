#include "main.h"

/**
 * set_bit - sets value of a bit
 * @n: Pointer
 * @i: Index
 *
 * Return: Success
 */

int set_bit(unsigned long int *n, unsigned int i)
{
	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << i);

	return (1);
}
