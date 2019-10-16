#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates all arguments
 * @ac: argument counter
 * @av: pointer to pointer to argument value
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
  char *str, *str_2;
  int i, j, count;

  if (ac == 0 || av == NULL)
    return (NULL);
  for (i = 0; i < ac; i++)
    {
      j = 0;
      while (av[i][j] != '\0')
	{
	  j++;
	  count++;
	}
      count++;
    }
  count++;
  str = malloc(count * sizeof(char));
  if (str == NULL)
    return (NULL);
  str_2 = str;
  for (i = 0; i < ac; i++)
    {
      j = 0;
      while (av[i][j] != '\0')
	{
	  *str = av[i][j];
	  j++;
	  str++;
	}
      *str = '\n';
      str++;
    }
  return (str_2);
}
