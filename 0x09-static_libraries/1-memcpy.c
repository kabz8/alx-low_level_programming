#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: mem storage
 * @src: mem copied
 * @n: bytes
 *
 * Return: copied mem with n bytes changes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
