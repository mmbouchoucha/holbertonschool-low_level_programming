#include <stdio.h>
/**
 * main - print name of arg
 * @argc: num of args passed to the func
 * @argv: arg vector of p to str
 *
 * Return: always 0
 */
int main(int argc, char const *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
