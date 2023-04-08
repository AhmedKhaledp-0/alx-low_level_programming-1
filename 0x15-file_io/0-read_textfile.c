#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - file to read and display.
 * @filename: read.
 * @letters: Number of bytes.
 *
 * Return: 0 if fails or NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_dr, n, write;

	if (!filename)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
		return (0);

	file_dr = open(filename, O_RDONLY);
	if (file_dr == -1)
	{
		free(buffer);
		return (0);
	}

	n = read(file_dr, buffer, letters);
	if (n == -1)
	{
		free(buffer);
		close(file_dr);
		return (0);
	}

	write = write(STDOUT_FILENO, buffer, n);
	if (write == -1)
	{
		free(buffer);
		close(file_dr);
		return (0);
	}

	free(buffer);
	close(file_dr);

	return (write);
}
