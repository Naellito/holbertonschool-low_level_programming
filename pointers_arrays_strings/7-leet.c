#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet)
 * @str: The string to be encoded
 *
 * Return: The encoded string
 */


char	*leet(char *str)
{
	int	i;
	int	j;
	char	skip[] = { 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L' };
	char	replace[] = { '4', '4', '3', '3', '0', '0', '7', '7', '1', '1' };

	i = 0;
	while (str[i])
	{
		j = 0;
		while (j <= 9)
		{
			if (str[i] == skip[j])
				str[i] = replace[j];
			j++;
		}
		i++;
	}
	return (str);
}