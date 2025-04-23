#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file where to append text
 * @text_content: text to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND, 0600);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

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
