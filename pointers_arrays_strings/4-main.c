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
	char *f = "test";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
