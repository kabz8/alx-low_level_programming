#include "main.h"

/**
 * _strlen - program returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
