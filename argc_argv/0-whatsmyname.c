#include "main.h"

/**
 * main - Main function
 * @argc: Argument count int
 * @argv: Argument vector char
 *
 * Return: 0 if successful, 1 if there is an error
 */

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc < 1)
        return (1);
    while (argv[0][i])
    {
        _putchar(argv[0][i]);
        i++;
    }
    _putchar('\n');
    return (0);
}
