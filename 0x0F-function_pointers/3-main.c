#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - perform simple operations
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 to exit
 */
int main(int argc, char *argv[])
{
int result;
int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
func = get_op_func(argv[2]);
if (func == NULL)
{
printf("Error\n");
exit(99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
{
printf("Error\n");
exit(100);
}
result = func(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", result);
return (0);
}
