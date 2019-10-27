#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings with trailing new line
 * @separator: string to be printed b/w the strings
 * @n: number of strings passed to function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
  va_list strings;
  unsigned int i;
  char *str;

  va_start(strings, n);
  i = 0;
  while (i < n)
    {
      str = va_arg(strings, char *);
      if (str == NULL)
	printf("(nil)");
      else if ((i < (n - 1)) && separator != NULL)
	printf("%s%s", str, separator);
      else
	printf("%s", str);
      i++;
    }
  printf("\n");
  va_end(strings);
}
