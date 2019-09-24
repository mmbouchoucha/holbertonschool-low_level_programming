#include <stdio.h>
#include "holberton.h"

/**
 * main-print Holberton
 *
 * Return: 0
 */

int main(void)
{
int i;
char school[9] = "Holberton";

i = 0;
while (i < 9)
{
_putchar(school[i]);
++i;
}
_putchar('\n');
return (0);
}
