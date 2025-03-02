#include "main.h"

/**
 * string_toupper - String Toupper Function
 * @str: String
 *
 * Return: String with uppercase
 */

char	*string_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
