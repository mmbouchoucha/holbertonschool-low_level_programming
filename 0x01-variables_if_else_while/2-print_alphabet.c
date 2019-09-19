#include <stdio.h>

/**
 * main - print alphabet on single line
 * Return: 0 to exit
 */

int main(void)
{
char hmed;

hmed = 'a';
while (hmed <= 'z')
{
putchar(hmed);
hmed++;
}
putchar('\n');
return (0);
}
