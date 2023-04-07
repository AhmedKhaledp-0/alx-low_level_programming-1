i#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - this function reads a text file and prints it to stdout.
 *
 * @filename: name of file to be read.
 * @letter: the maximum number of characters to read.
 *
 * Return: the number of characters read and printed, or print 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letter)
{
	if (filename == NULL)
	{
		fprintf(stderr, "read_textfile: filename is NULL\n");
		return (0);
	}

	FILE *holder = fopen(filename, "r");

	if (holder == NULL)
	{
		perror("read_textfile: fopen");
		return (0);
	}

	char *buffer = malloc(letter + 1);

	if (buffer == NULL)
	{
		perror("read_textfile: malloc");
		fclose(holder);
		return (0);
	}

	size_t num_read = fread(buffer, 1, letter, holder);

	buffer[num_read] = '\0';

	size_t num_written = fwrite(buffer, 1, num_read, stdout);

	if (num_written < num_read)
	{
		perror("read_textfile: fwrite");
		num_read = num_written;
	}

	free(buffer);

	fclose(holder);

	return (num_read);
}
