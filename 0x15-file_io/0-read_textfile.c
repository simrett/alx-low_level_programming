#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: the file to open.
 * @num_bytes: number of bytes to read and print.
 * Return: number of bytes read and printed, or 0 if:
 * - filename is NULL.
 * - the file can not be opened or read.
 * - write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t num_bytes)
{
	int file_descriptor = -1;
	ssize_t bytes_read = 0;
	char *buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);

	buffer = malloc(sizeof(char) * num_bytes);
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, num_bytes);
	if (bytes_read < 0)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_read = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(file_descriptor);
	if (bytes_read < 0)
		return (0);

	
}
