#include "main.h"

/**
 * _printf - write output to stdout, the standard output stream.
 * @format: a character string which is composed of zero or more directives.
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list args;

	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && (*(format + 1) != '\0'))
	{
		format++;
		switch (*format)
		{
			case 'c':
				count += _printf_char(args);
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			default:
				_putchar('%');
				_putchar(*format);
				count += 2;
				break;
		}
	}
			else
			{
				_putchar(*format);
				count++;
			}
		format++;
	}
	va_end(args);
	return (count);
}
