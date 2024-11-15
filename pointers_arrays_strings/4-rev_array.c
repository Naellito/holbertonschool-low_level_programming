#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: The array to be reversed
 * @n: The number of elements in the array
 */


void	reverse_array(int *a, int n)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
