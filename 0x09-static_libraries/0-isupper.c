#include "main.h"

/**
 * _isupper - check uppercase letters
 * @c: character to check
 *
 * Return: if uppercase return 1, else return 0
 * 
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
