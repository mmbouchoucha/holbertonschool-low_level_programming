#include <stdio.h>

/**
 * main - print name
 * @argc: arguments
 * @argv: strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
if (argc == 1)
printf("%s\n", argv[0]);
else
{
argv[0] = argv[2];
printf("%s\n", argv[0]);
}
return (0);
}
