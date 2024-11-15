#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The main string to be examined
 * @needle: The substring to be searched in haystack
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the substring is not found
 */


char	*_strstr(char *haystack, char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return ('\0');
}
