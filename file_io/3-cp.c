#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * print_error - Prints an error message to STDERR and exits.
 * @exit_code: Exit code to use.
 * @format: Error format string.
 * @arg: Filename or descriptor value.
 */
void print_error(int exit_code, const char *format, const char *arg)
{
dprintf(STDERR_FILENO, format, arg);
exit(exit_code);
}

/**
 * close_fd - Closes a file descriptor, exits on failure.
 * @fd: The file descriptor to close.
 */
void close_fd(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * copy_file - Handles copying from one file to another.
 * @file_from: Source file name.
 * @file_to: Destination file name.
 */
void copy_file(const char *file_from, const char *file_to)
{
int from_fd, to_fd, r, w;
char buffer[1024];

from_fd = open(file_from, O_RDONLY);
if (from_fd == -1)
print_error(98, "Error: Can't read from file %s\n", file_from);

to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (to_fd == -1)
{
close_fd(from_fd);
print_error(99, "Error: Can't write to %s\n", file_to);
}

while ((r = read(from_fd, buffer, 1024)) > 0)
{
w = write(to_fd, buffer, r);
if (w == -1 || w != r)
{
close_fd(from_fd);
close_fd(to_fd);
print_error(99, "Error: Can't write to %s\n", file_to);
}
}
if (r == -1)
{
close_fd(from_fd);
close_fd(to_fd);
print_error(98, "Error: Can't read from file %s\n", file_from);
}

close_fd(from_fd);
close_fd(to_fd);
}

/**
 * main - Entry point for the file copy program.
 * @ac: Argument count.
 * @av: Argument vector.
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
if (ac != 3)
print_error(97, "Usage: %s file_from file_to\n", av[0]);
copy_file(av[1], av[2]);
return (0);
}
