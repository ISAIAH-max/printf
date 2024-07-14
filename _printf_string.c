#include "main.h"

/**
 * _printf_string - Prints a string
 * @args: The variable argument list containing the string to print.
 *
 * Return: number of character of a string printed
 */

int _printf_string(va_list args)
{
  int i;
  char *s = va_arg(args, char *);

  if (s == NULL)
    s = "(null)";
  for (i = 0; s[i]; i++)
    _putchar(s[i]);
  return i;
}
