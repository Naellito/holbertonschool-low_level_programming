#include "main.h"

/**
 * main - copies the content of a file to another
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *source;
	char *destination;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source = argv[1];
	destination = argv[2];

	cp(source, destination);

	return (0);
}

/**
 * cp - copies the content of a file to another
 * @src: source file
 * @dest: destination file
 * No return
 */

void cp(const char *src, const char *dest)
{
	int file_src, file_dest;
	char buffer[1024];
	ssize_t bytes_read = 0, bytes_written = 0;

	file_src = open(src, O_RDONLY, 0444);
	file_dest = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((bytes_read = read(file_src, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(file_dest, buffer, bytes_read);
		if (file_dest == -1 || bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			close(file_src);
			close(file_dest);
			exit(99);
		}
	}

	if (file_src == -1 || bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		close(file_src);
		close(file_dest);
		exit(98);
	}

	if (close(file_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_dest);
		exit(100);
	}
}
