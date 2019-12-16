#include "holberton.h"
#include <stdio.h>

/**
 * _puts - check the code for Holberton School students.
 * @s: is string
 * Return: Always 0.
 */
void _puts(char *s)
{
  while (*s)
    {
      _putchar(*s);
      s++;
    }
  _putchar('\n');
}
