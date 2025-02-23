#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - Print the absolute value of the number.
 *
 * @n: N is int.
 * Return: 0
 */

int	print_last_digit(int n)
{
	if (n < 0)
	{
		n = n % 10;
		n = n * -1;
		n = n + '0';
		write(1, &n, 1);
		return (n - '0');
	}
	else
	{
		n = n % 10;
		n = n + '0';
		write(1, &n, 1);
		return (n - '0');
	}
	return (0);
}
