#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s: is the string
 * Return: Always 0.
 */
int _strlen(char *s)
{
  int c = 0;
  while (s[c] != '\0')
    c++;
  return (c);
}
