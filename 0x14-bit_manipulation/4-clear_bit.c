#include "main.h"

/**
 * clear_bit - sets value of a bit
 * @n: pointer
 * @i: Index
 *
 * Return: error -1 othwerise 0
 */

int clear_bit(unsigned long int *n, unsigned i)
{
	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << i);

	return (1);
}
