#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed,
 *         0 if file can't be opened/read, or if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t r, w;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

r = read(fd, buffer, letters);
if (r == -1)
{
free(buffer);
close(fd);
return (0);
}

w = write(STDOUT_FILENO, buffer, r);
if (w == -1 || w != r)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (w);
}
