#include "main.h"

/**
 * _strncpy - programto copy
 * @dest: value 1
 * @src: value 2
 *
 * @n: value n
 *
 * return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src [b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
