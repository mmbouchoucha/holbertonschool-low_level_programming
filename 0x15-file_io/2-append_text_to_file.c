#include "holberton.h"
/**
 * append_text_to_file - text at the end
 * @filename: filename.
 * @text_content: added content.
 * Return: 1 in file exists, else -1 in fails does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
int yoyo;
int len;
int x;
if (!filename)
return (-1);
yoyo = open(filename, O_WRONLY | O_APPEND);
if (yoyo == -1)
return (-1);
if (text_content)
{
for (len = 0; text_content[len]; len++)
;
x = write(yoyo, text_content, len);
if (x == -1)
return (-1);
}
close(yoyo);
return (1);
}
