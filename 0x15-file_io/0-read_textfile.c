#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of characters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Otherwise -  the function reads and prints.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, bytes_read, bytes_written;
	char *text_buffer;

	if (filename == NULL)
		return (0);

	text_buffer = malloc(sizeof(char) * letters);
	if (text_buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	bytes_read = read(file_descriptor, text_buffer, letters);
	bytes_written = write(STDOUT_FILENO, text_buffer, bytes_read);

	if (file_descriptor == -1 || bytes_read == -1 ||
	    bytes_written == -1 || bytes_written != bytes_read)
	{
		free(text_buffer);
		return (0);
	}

	free(text_buffer);
	close(file_descriptor);

	return (bytes_written);
}

