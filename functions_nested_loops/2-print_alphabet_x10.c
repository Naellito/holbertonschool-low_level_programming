#include "main.h"

/**
  * print_alphabet - Make the alphabet
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	int	i;
	int	count;

	count = 0;
	while (count < 10)
	{
		i = 'a';
		while (i < 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		count++;
	}

}
