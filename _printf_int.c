#include "main.h"

/**
 * _printf_int - Prints and integer
 * @args: List of arguments
 *
 * Return: number of characters printed
 */
int _printf_int(va_list args) {
  int n = va_arg(args, int);
  char buffer[20];
  int i = 0, j, count = 0;

  if (n < 0) {
    _putchar('-');
    n = -n;
    count++;
  }
  do {
    buffer[i++] = (n % 10) + '0';
    n /= 10;
  } while (n > 0);
  for (j = i - 1; j >= 0; j--) {
    _putchar(buffer[j]);
    count++;
  }
  return (count);
}
