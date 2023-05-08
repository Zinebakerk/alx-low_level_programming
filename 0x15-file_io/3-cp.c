#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function that actually allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
char *buff;

buff = malloc(sizeof(char) * 1024);

if (buff == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (buff);
}

/**
 * close_file -function that  closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
int c;

c = close(fd);

if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffe;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffe = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, buffe, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffe);
exit(98);
}

w = write(to, buffe, r);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffe);
exit(99);
}

r = read(from, buffe, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);

} while (r > 0);

free(buffe);
close_file(from);
close_file(to);

return (0);
}
