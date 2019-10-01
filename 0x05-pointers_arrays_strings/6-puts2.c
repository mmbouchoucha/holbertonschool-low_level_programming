#include "holberton.h"

/**
 * puts2 - prints every other character in a string
 * @str: pointer to string
 *
 * Return: void
 */

void puts2(char *str)
{
  int i;
  char letter;

  for (i = 0; str[i] != 0; i++)
    {
      if (i % 2 == 0)
	{
	  letter = str[i];
	  _putchar(letter);
	}
    }
  _putchar('\n');
}#include "holberton.h"

/**
 * puts2 - prints every other character in a string
 * @str: pointer to string
 *
 * Return: void
 */

void puts2(char *str)
{
int i;
char letter;

for (i = 0; str[i] != 0; i++)
{
if (i % 2 == 0)
{
letter = str[i];
_putchar(letter);
}
}
_putchar('\n');
}
