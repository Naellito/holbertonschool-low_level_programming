#include <stdio.h>

/**
 * main - Main Function
 *
 * Return: 0
 */

int	main(void)
{
	char	num;

	num = '0';
	while (num <= '9')
		putchar(num++);
	putchar('\n');
	return (0);
}
