#include "main.h"

/**
 * create_file - function that create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 if code succesfuly runs, -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
int count;
int writed;
int i;

if (filename == NULL)
{
return (-1);
}
count = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (count == -1)
{
return (-1);
}
if (text_content)
{
for (i = 0; text_content[i] != '\0'; i++)
;
writed = write(count, text_content, i);
if (writed == -1)
return (-1);
}

close(count);
return (1);
}
