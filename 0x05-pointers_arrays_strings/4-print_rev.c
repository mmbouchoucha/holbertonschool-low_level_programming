#include "holberton.h"

/**
 * print_rev - print a string in reverse with trailing new line
 * @s: pointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
int i;
char letter;

for (i = 0; s[i] != 0; i++)
{
}
for (i = i - 1; i >= 0; i--)
{
letter = s[i];
_putchar(letter);
}
_putchar('\n');
}
