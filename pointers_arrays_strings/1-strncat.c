#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to be appended
 *
 * Return: A pointer to the resulting string dest
 */


char	*_strncat(char *dest, char *src, int n)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[l] != '\0' && l < n)
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}
