#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two nums
 * @argc: num of args passed to the func
 * @argv: arg vector of p to strs
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
puts("Error");
return (1);
}

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
