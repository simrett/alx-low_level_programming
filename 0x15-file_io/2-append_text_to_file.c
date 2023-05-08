#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file to append the text.
 * @text: the NULL-terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text)
{
	int file_descriptor;
	size_t length = 0;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text == NULL)
	{
		close(file_descriptor);
		return (1);
	}

	while (text[length])
		length++;

	ssize_t bytes_written = write(file_descriptor, text, length);

	if (bytes_written == -1 || (size_t) bytes_written != length)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
