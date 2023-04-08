#include "main.h"

/**
 * create_file - Entry point - This function Creates a file.
 * @filename: Pointer to the name of the created file.
 * @text_content: Pointer to a string to  be writen into the file.
 *
 * Returns: On success return - 1 else - -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int dir;
	int wrt;
	int file_len;

	file_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (file_len = 0; text_content[file_len];)
			file_len++;
	}

	dir = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	wrt = write(dir, text_content, file_len);

	if (dir == -1 || wrt == -1)
	{
		return (-1);
	}

	close(dir);

	return (1);
}
