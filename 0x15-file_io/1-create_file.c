#include "main.h"

/**
* create_file - Creates a file.
* @filename: A pointer to the name of the file to create.
* @text_content: A pointer to a string to write to the file.
* Return: If the function fails - -1.
*/
int create_file(const char *filename, char *text_content)
{
int opener, writer, lenng = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (lenng = 0; text_content[lenng];)
lenng++;
}

opener = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
writer = write(opener, text_content, lenng);

if (opener == -1 || writer == -1)
return (-1);

close(opener);

return (1);
}
