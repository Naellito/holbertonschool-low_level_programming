#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: A pointer to the destination string dest
 */

char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
