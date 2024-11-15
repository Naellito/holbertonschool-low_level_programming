#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The main string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: The number of bytes in the initial segment of s which consist only of bytes from accept
 */


unsigned int	_strspn(char *s, char *accept)
{
	int	i;
	int	n;
	int	found;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		n = 0;
		found = 0;
		while (accept[n])
		{
			if (s[i] == accept[n])
			{
				found = 1;
				count++;
				break;
			}
			n++;
		}
		if (found == 0)
			return (count);
		i++;
	}
	return (count);
}
