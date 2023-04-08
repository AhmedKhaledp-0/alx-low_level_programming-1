#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to stdout.
 * @filename: Text file being read.
 * @letters: Number of bytes to be read.
 *
 * Return: Number of bytes read and printed.
 *         0 if function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buf;
    ssize_t fd, t, w;

    if (!filename)
        return (0);

    buf = malloc(letters);
    if (!buf)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        free(buf);
        return (0);
    }

    t = read(fd, buf, letters);
    if (t == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    w = write(STDOUT_FILENO, buf, t);
    if (w == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    free(buf);
    close(fd);

    return (w);
}

