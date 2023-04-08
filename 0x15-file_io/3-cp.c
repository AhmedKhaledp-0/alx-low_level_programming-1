#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

char *allocate_buffer(const char *filename);

void close_file(int fd);

/**
 * allocate_buffer - Allocates a buffer of BUFFER_SIZE bytes.
 * @filename: The name of the file to be read.
 *
 * Return: A pointer to the allocated buffer.
 */
char *allocate_buffer(const char *filename)
{
	char *buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't allocate memory for buffer\n");
		exit(EXIT_FAILURE);
	}
	return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close file descriptor %d\n", fd);
		exit(EXIT_FAILURE);
	}
}

/**
 * main - Copies the contents of one file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the program arguments.
 *
 * Return: 0 on success, or a non-zero value on failure.
 */
int main(int argc, char *argv[])
{
	int input_fd, output_fd, bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s source_file dest_file\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	buffer = allocate_buffer(argv[1]);
	input_fd = open(argv[1], O_RDONLY);
	if (input_fd == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't open file %s for reading\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	output_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (output_fd == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't open file %s for writing\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	do {
		bytes_read = read(input_fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}

		bytes_written = write(output_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to file %s\n", argv[2]);
			exit(EXIT_FAILURE);
		}
	} while (bytes_read > 0);

	close_file(input_fd);

	close_file(output_fd);

	free(buffer);

	return (EXIT_SUCCESS);
}
