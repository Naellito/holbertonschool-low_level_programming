#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 */


void	puts_half(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i = (i + 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
