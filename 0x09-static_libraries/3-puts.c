#include "main.h"

/**
 * _puts - print string 
 * @str: string
 * _putchar prints new line
 *
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\0');
}
