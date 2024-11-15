#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the diagonals of a square matrix
 * @a: Pointer to the first element of the matrix
 * @size: The size of the matrix
 */

void	print_diagsums(int *a, int size)
{
	int i;
	int res1;
	int res2;

	i = 0;
	res1 = 0;
	res2 = 0;
	while (i < size)
	{
		res1 = res1 + a[i * size + i];
		res2 = res2 + a[i * size + (size - i - 1)];
		i++;
	}
	printf("%d, %d\n", res1, res2);
}
