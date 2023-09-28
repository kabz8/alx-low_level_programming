#include "main.h"

/**
 * flip_bits - Counts number of bits
 *
 * @n: Number
 * @m: number to flip n to
 *
 * Return: Number of bits
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
