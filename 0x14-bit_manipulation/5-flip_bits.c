#include "main.h"

/**
 * flip_bits - counts bits
 *
 * @n: Number
 * @k: Number
 *
 * Return: Number of bits from n to k
 */

unsigned int flip_bits(unsigned long int n, unsigned long int k)
{
	unsigned long int xor = n ^ k, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
