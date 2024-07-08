#include "main.h"

/**
 * _printf_char - print a character.
 *@args: The arguments
 *
 * Return: 1
 */

void _printf_char(va_list args)
{
  char s;
  s = va_arg(args, int);
  _putchar(s);
}
