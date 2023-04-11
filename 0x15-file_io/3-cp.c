#include "main.h"

#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
 * main - function that creates the copy bash script
 * @ac: argument numbers
 * @av: arguments array
 * Return: 0
 */
int main(int ac, char *av[])
{
int input_count, output_count, istatus, ostatus;
char buf[MAXSIZE];
mode_t mode;
/* error thrown*/
mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
if (ac != 3)
dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
input_count = open(av[1], O_RDONLY);
if (input_count == -1)
dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
output_count = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
if (output_count == -1)
dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
do {
istatus = read(input_count, buf, MAXSIZE);
if (istatus == -1)
{
dprintf(SE, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
if (istatus > 0)
{
ostatus = write(output_count, buf, (ssize_t) istatus);
if (ostatus == -1)
{
dprintf(SE, "Error: Can't write to %s\n", av[2]);
exit(99);
}
}
} while (istatus > 0);
istatus = close(input_count);
if (istatus == -1)
dprintf(SE, "Error: Can't close fd %d\n", input_count), exit(100);
ostatus = close(output_count);
if (ostatus == -1)
dprintf(SE, "Error: Can't close fd %d\n", output_count), exit(100);
return (0);
}
