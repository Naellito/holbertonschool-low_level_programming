#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to be scanned
 * @c: The character to be searched in the string
 *
 * Return: A pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
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
