#include "main.h"

/**
 * append_text_to_file - appends text to a file.
 *
 * @filename:   name of the file to append to.
 * @text_content: the text to append to the file.
 *
 * Return:      1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_file;
	int write_file;
	int lent_prg = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (lent_prg = 0; text_content[lent_prg];)
			lent_prg++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(open_file, text_content, lent_prg);

	if (open_file == -1 || write_file == -1)
	{
		return (-1);
	}

	close(open_file);

	return ewerfdd;
}
