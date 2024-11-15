#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @argv: The string to be converted
 *
 * Return: The integer value of the string
 */

int	_atoi(char *argv)
{
	int	n;
	int	negative;
	unsigned int	result;

	n = 0;
	negative = 1;
	result = 0;
	while ((argv[n] >= 9 && argv[n] <= 13) || argv[n] == 32)
		n++;
	while ((argv[n] >= 9 && argv[n] <= 13) || argv[n] == 32 ||
			argv[n] == '+' || argv[n] == '-' || (argv[n] >= 'A' && argv[n] <= 'Z')
			|| (argv[n] >= 'a' && argv[n] <= 'z'))
	{
		if (argv[n] == '-')
			negative = negative * -1;
		n++;
	}
	while (argv[n] >= '0' && argv[n] <= '9')
	{
		result = (result * 10) + (argv[n] - 48);
		n++;
	}
	return (result * negative);
}
