#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: create file
 * @text_content: content writed in the file.
 * Return: 1 in success, -1 in fails.
 */
int create_file(const char *filename, char *text_content)
{
int ala;
int nletters;
int x;
if (!filename)
return (-1);
ala = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (ala == -1)
return (-1);
if (!text_content)
text_content = "";
for (nletters = 0; text_content[nletters]; nletters++)
;
x = write(ala, text_content, nletters);
if (x == -1)
return (-1);
close(ala);
return (1);
}
