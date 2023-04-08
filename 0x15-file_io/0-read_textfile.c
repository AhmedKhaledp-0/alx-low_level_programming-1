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
	ssize_t val, l_write, l_read;

	val = open(filename, O_RDONLY);

	if (val == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	l_read = read(val, buffer, letters);

	l_write = write(STDOUT_FILENO, buffer, l_read);

	free(buffer);

	close(val);

	return (l_write);
}
