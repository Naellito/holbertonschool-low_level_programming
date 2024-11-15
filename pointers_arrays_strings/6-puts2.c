#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be printed
 */


void	puts2(char *str)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (str[l] != '\0')
		l++;
	while (str[i] != '\0' && i <= l)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
