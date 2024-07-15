#include "main.h"

/**
 * _printf_int - Prints and integer
 * @args: List of arguments
 *
 * Return: number of characters printed
 */
int _printf_int(va_list args)
{
  int n = va_arg(args, int);
  char buffer[20];
  int i = 0, j, count = 0;
  unsigned int num;

  if (n < 0)
    {
      count += _putchar('-');
      n = -n;
    }
  else
    {
      num = n;
    }
  do {
      buffer[i++] = (num % 10) + '0';
      num /= 10;
    }
  while (num > 0);

  for (j = i - 1; j >= 0; j--)
    {
      count += _putchar(buffer[j]);
    }
  return (count);
}
