#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: text to print in the created file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (text_content == NULL)
		return (1);

	if (file == -1)
		return (-1);

	while (text_content[bytes])
		bytes++;

	if (bytes != 0)
	{
		bytes_written = write(file, text_content, bytes);

		if (bytes_written == -1)
			return (-1);
	}
	close(file);
	return (1);
}
