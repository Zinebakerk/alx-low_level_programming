#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 * Return: If the function fails or filename is NULL - 0. 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t opener, reader, writer;
char *buff;

if (filename == NULL)
return (0);

buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);

opener = open(filename, O_RDONLY);
reader = read(opener, buff, letters);
writer = write(STDOUT_FILENO, buff, reader);

if (opener == -1 || reader == -1 || writer == -1 || writer != reader)
{
free(buff);
return (0);
}

free(buff);
close(o);

return (writer);
}
