#include "main.h"

/**
 * _isdigit - Funct isdigit
 * @c: Int
 *
 * Return: 1 if its digit, 0 else.
 */

int	_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
