#include "main.h"

/**
 * _strchr - Function _STRCHR
 * @s: Char *
 * @c: Char
 *
 * Return: Char
 */

char	*_strchr(char *s, char c)
{
	if (c == '\0')
		return ("");
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
