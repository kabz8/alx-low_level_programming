#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes C to stdout
 * @c: char
 *
 * Return: On sucess 1.
 * On error, -1 is returned.
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
