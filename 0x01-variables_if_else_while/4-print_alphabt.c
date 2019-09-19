#include <stdio.h>

/**
 * main - print alphabet except q and e
 * Return: 0 to exit
 */

int main(void)
{
char l;
l = 'a';
while (l <= 'z')
{
if (l != 'e' && l != 'q')
{
putchar(l);
}
l++;
}
putchar('\n');
return (0);
}
