#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: Pointer to an array of characters representing the board
 */


void	print_chessboard(char (*a)[8])
{
	int	i;
	int	j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
