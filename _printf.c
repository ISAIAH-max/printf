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
    int i = 0, j = 0, count = 0;
    printer_t funcs[] = {
		{"c", _printf_char},
        {"s", _printf_string},
	};

	va_start(args, format);
	
	while (format && (*(format + i)))
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				j = 0;
				while (j < 2 && format[i] != *(funcs[j].symbol))
				{
					j++;
				}
				if (j < 2)
				{
					funcs[j].print(args);
					count++;
				}
				else
				{
					_putchar('%');
					_putchar(format[i]);
					count += 2;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
