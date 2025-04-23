#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: name of the file to open and read
 * @letters: number of letters to read and print
 * Return: number of letters the function could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char buffer[2048];

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)
	{
		close(file);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(file);

	if (bytes_written != bytes_read)
	{
		close(file);
		return (0);
	}
	return (bytes_written);
}
