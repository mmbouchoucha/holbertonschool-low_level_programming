#include <stdio.h>

/**
 * main - print 0-8 and a-f
 * Return: 0 to exit
 */

int main(void)
{
char l = 'a';
char n = '0';

while (n <= '9')
{
putchar(n);
n++;
}
while (l <= 'f')
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
