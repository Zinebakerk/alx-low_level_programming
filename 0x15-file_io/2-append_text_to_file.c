#include "main.h"

/**
 * append_text_to_file - function that appends text to the end of a file
 * @filename: name of file
 * @text_content: string to add at the end
 * Return: 1 if code successfuly runs, -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
int count, state, i;

if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
return (1);
}
/* checking */

count = open(filename, O_APPEND | O_WRONLY);
if (count == -1)
{
return (-1);
}
for (i = 0; text_content[i] != '\0'; i++)
;
state = write(count, text_content, i);
if (state == -1)
{
return (-1);
}
close(count);
return (1);
}
