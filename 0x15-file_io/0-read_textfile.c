#include "holberton.h"

/**
 * read_textfile - read text file and print it
 * @filename: filename
 * @letters: num of letters to read and print
 *
 * Return: num of letters it can read and print, or O
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd;
  ssize_t rf, wf, cf;
  char *buff;

  if (filename == NULL)
    return (0);

  buff = malloc(sizeof(char) * letters);
  if (buff == NULL)
    return (0);

  fd = open(filename, O_RDONLY);
  if (fd == -1)
    {
      free(buff);
      return (0);
    }
  rf = read(fd, buff, letters);
  if (rf == -1)
    {
      free(buff);
      return (0);
    }
  if (rf > 0)
    wf = write(STDOUT_FILENO, buff, rf);
  if (wf == -1)
    {
      free(buff);
      return (0);
    }
  cf = close(fd);
  if (cf == -1)
    {
      free(buff);
      return (0);
    }
  free(buff);
  return (rf);
}
