#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concat 2 strings
 * @s1: str 1
 * @s2: str 2
 * Return: p to new string
 */
char *str_concat(char *s1, char *s2)
{
  char *str;
  unsigned int i, n, t;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";
  i = 0;
  while (s1[i])
    i++;
  n = 0;
  while (s2[n])
    n++;
  str = malloc(((i + n) * sizeof(*str)) + 1);
  if (str == NULL)
    return (NULL);
  t = 0;
  while (s1[t])
    {
      str[t] = s1[t];
      t++;
    }
  n = 0;
  while (s2[n])
    {
      str[t] = s2[n];
      t++;
      n++;
    }
  str[t] = '\0';
  return (str);
}
