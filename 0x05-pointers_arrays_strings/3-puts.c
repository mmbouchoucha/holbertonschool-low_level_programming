#include "holberton.h"

/**
 * _puts - print string with trailing new line
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
char s;

while ((s = *str) != '\0')
{
_putchar(s);
str++;
}
_putchar('\n');
}
