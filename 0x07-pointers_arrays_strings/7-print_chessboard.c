#include "holberton.h"

/**
 * print_chessboard - print chessboard setup
 * @a: char pointer number of rows
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
int i, j;

i = 0;
while (i < 8)
{
j = 0;
while (j < 8)
{
_putchar(a[i][j]);
if (j == 7)
_putchar('\n');
j++;
}
i++;
}
}
