#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - calls print_alphabet function
 *
 * Return: void
 */

void print_alphabet(void)
{
char l;

l = 'a';
while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
}
