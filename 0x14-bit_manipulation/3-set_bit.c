#include "main.h"

/**
 * set_bit - Sets value of bit
 * @n: pointer
 * @index:Index to set value at from 0
 *
 * Return: If an error occurs -1 Otherwise -1
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
