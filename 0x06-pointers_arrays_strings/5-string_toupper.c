#include "holberton.h"

/**
 * string_toupper - change lowercase letters to upper
 * @c: pointer to char
 *
 * Return: character
 */

char *string_toupper(char *c)
{
  int i;

  for (i = 0; c[i] != '\0'; i++)
    {
      if (c[i] >= 'a' && c[i] <= 'z')
	c[i] = c[i] - 32;
    }
  return (c);
}
