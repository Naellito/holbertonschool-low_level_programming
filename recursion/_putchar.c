#include <unistd.h>

/**
 * _putchar - Outputs the character c to stdout
 * @c: The character to be printed
 *
 * Return: 1 on success,
 *        -1 on error, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
