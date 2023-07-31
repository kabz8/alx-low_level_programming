#include "main.h"
/**
 * _strchr - program start
 * @s: input value
 * @c: value 2
 *
 * Return: Always 0
 *
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
