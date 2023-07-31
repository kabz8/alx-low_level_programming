#include "main.h"

/**
 * _isalpha - alphabtes
 * @c: char
 * return: 1 if c is letter and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
