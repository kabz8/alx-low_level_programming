#include "main.h"

/**
 * get_bit - Gets the value of a bit
 * @n: bit
 * @i: The index
 *
 * Return: Success
 *
 */

int get_bit(unsigned long int n, unsigned int i)
{
	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << i)) == 0)
		return (0);

	return (1);
}
