#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
 */


char	*_strpbrk(char *s, char *accept)
{
	int	n;

	if (s[0] == '\0' || accept[0] == '\0')
		return ('\0');
	while (*s != '\0')
	{
		n = 0;
		while (accept[n])
		{
			if (*s == accept[n])
				return (s);
			n++;
		}
		s++;
	}
	return ('\0');
}
