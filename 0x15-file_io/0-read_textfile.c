#include "main.h"

/**
 * read_textfile -function that read a text file and print to POSIX stdout
 * @filename: char string 
 * @letters: number of letters
 * Return: number of letters that should be read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int count;
ssize_t readc, writec;
char *buffer;

if (filename == NULL)
return (0);

count = open(filename, O_RDWR);
if (count == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
free(buffer);
return (0);
}
readc = read(count, buffer, letters);
if (readc == -1)
return (0);

writec = write(STDOUT_FILENO, buffer, readc);
if (writec == -1 || readc != writec)
return (0);
free(buffer);

close(count);
return (writec);
}

