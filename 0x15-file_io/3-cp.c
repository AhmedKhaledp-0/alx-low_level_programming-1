#include "main.h"

/**
* print_error - file error and close.
* @file_handle: file handle.
*
* Return: Null.
*/

void print_error(int file_handle)
{
	dprintf(STDERR_FILENO, "Error!! files closed!! %d\n", file_handle);

	exit(100);
}

/**
* main - Duplicate content of a file >> another file.
* @argc: Arguments.
* @argv: Array.
*
* Return: Success.
*/
int main(int argc, char *argv[])
{
	int file_orginal_location, file_new_location, new_w_c;

	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "COPY: file to new location\n");

		exit(97); 
        }

	file_orginal_location = open(argv[1], O_RDONLY);

	if (argv[1] == NULL || file_orginal_location < 0)
	{
		dprintf(STDERR_FILENO, "Error: No such file in path %s\n", argv[1]);

		exit(98); }

	file_new_location = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_new_location < 0)
	{
		dprintf(STDERR_FILENO, "Can't write file to %s\n", argv[2]);

		close(file_orginal_location);

		exit(99); }

	while ((new_w_c = read(file_orginal_location, buffer, 1024)) > 0)
	{
		if (new_w_c != write(file_new_location, buffer, new_w_c))
		{
			dprintf(STDERR_FILENO, "Stop: Can't write to %s\n", argv[2]);

			close(file_orginal_location);

			close(file_new_location);

			exit(99);
            }
    }

    int i;
    i = 0;

	if (new_w_c < i)
	{
		dprintf(STDERR_FILENO, "Error! Can't read from file: %s\n", argv[1]);

		exit(98); 
    }

	if (close(file_orginal_location) < 0)
    {
        print_error(file_orginal_location);
    }
		
	if (close(file_new_location) < 0)
    {
        print_error(file_new_location);
    }

return (0);

}
