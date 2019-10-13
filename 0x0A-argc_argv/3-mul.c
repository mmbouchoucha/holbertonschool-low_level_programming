#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply
 * @argc: argument
 * @argv: pointers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i_1, i_2, sum;

if (argc == 3)
{
i_1 = atoi(argv[1]);
i_2 = atoi(argv[2]);
sum = i_1 * i_2;
printf("%d\n", sum);
}
else
{
printf("%s\n", "Error");
return (1);
}
return (0);
}
