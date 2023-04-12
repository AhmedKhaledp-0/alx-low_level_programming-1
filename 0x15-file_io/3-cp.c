#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copy content of file a to file b.
 * @argc: number of arguments passed.
 * @argv: array of arguments passed.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_read;
	int file_write;
	int rd;
	int a;
	int b;

	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Copied! \n");

		exit(97);
	}

	file_read = open(argv[1], O_RDONLY);

	if (file_read < 0)
	{
		dprintf(STDERR_FILENO, "Can't read file!! Error! EXIT!! %s\n", argv[1]);

		exit(98);
	}

	file_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((rd = read(file_read, buff, BUFSIZ)) > 0)
	{
		if (file_write < 0 || write(file_write, buff, rd) != rd)
		{
			dprintf(STDERR_FILENO, "Can't write file!! Error! EXIT!! %s\n", argv[2]);

			close(file_read);

			exit(99);
		}
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Can't read file!! Error! EXIT!! %s\n", argv[1]);

		exit(98);
	}

	a = close(file_read);

	b = close(file_write);

	if (!(a > 0 && b > 0))
	{
		if (a < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_read);
		}
			
		if (b < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_write);
		}

		exit(100);
	}

	return (0);
}