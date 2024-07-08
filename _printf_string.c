#include "main.h"

/**
 *_printf_string - Prints a string
 *@args: The variable argument list containing the string to print.
 *
 */

void _printf_string(va_list args)
{
  char *s = va_arg(args, char *);

  if (s == NULL)
    s = "(null)";
  while (*s)
    _putchar(*s++);
}
