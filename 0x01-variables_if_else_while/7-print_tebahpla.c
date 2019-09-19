#include <stdio.h>

/**
 * main - print alphabet in reverse
 * Return: 0 to exit
 */

int main(void)
{
char l;
l = 'z';
while (l >= 'a')
{
putchar(l);
l--;
}
putchar('\n');
return (0);
}
