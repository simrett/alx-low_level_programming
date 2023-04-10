#include "main.h"

/**
 * read_textfile - reads a tect file and prints it to the POSIX std-output.
 * @filename: the file to open.
 * @letters: number of letters it should read and print.
 * Return: numbers of letters it could read and print, or 0 if:
 * - filename is NULL.
 * - the file cannot be open or read.
 * - write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);
	return (bytes_written);
}
