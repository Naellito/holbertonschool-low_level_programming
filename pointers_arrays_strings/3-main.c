#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
