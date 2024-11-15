#include "main.h"
#include <unistd.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed in reverse
 */


void    print_rev(char *s)
{
	int     i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
	write(1, "\n", 1);
}
