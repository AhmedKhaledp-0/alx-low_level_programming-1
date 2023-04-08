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
    if (filename == NULL) 
    {
        return (-1);
    }

    int f_path = open(filename, O_WRONLY | O_APPEND);

    if (f_path == -1)
    {
        return (-1);
    }

    if (text_content == NULL) 
    {
        close(f_path);
        return (1);
    }

    int num = 0;
    
    while (text_content[num] != '\0') 
    {
        ++num;
    }

    int write_path = write(f_path, text_content, num);

    close(f_path);

    return (write_path == num ? 1 : -1);
}
