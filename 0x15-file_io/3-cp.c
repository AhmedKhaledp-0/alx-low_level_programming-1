#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - This function will free 1024 bytes for a buffer.
 * @file: buffer destination storing our chars.
 *
 * Return: pointer destination new allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error!! Write Error destination %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - will close file.
 *
 * @file: file destination be closed.
 */
void close_file(int file)
{
	int cls;

	cls = close(file);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error!! close file_dir error!! %d\n", file);
		exit(100);
	}
}

/**
 * main - Copy contents of file_md destination another file_md.
 * @argc: number of arguments gotten.
 * @argv: array of pointers destination arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int src;
	int destination;
	int r_file;
	int w_file;

	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Copy!! \n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	src = open(argv[1], O_RDONLY);
	r_file = read(src, buffer, 1024);
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || r_file == -1)
		{
			dprintf(STDERR_FILENO, "Can't read file!! Error! EXIT!! %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w_file = write(destination, buffer, r_file);
		if (destination == -1 || w_file == -1)
		{
			dprintf(STDERR_FILENO, "Can't write file!! Error! EXIT!! %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r_file = read(src, buffer, 1024);
		destination = open(argv[2], O_WRONLY | O_APPEND);

	} while (r_file > 0);

	free(buffer);

	close_file(src);

	close_file(destination);

	return (0);
}
