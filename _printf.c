#include "main.h"
/**
 * _printf - write output to stdout, the standard output stream.
 * @format: a character string which is composed of zero or more directives.
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0, count = 0;
	printer_t funcs[] = {
  		{"c", _printf_char},
		{"s", _printf_string},
  		{"d", _printf_int},
  		{"i", _printf_int}
	};
	va_start(args, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format && (*(format + i)))
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				count += _putchar('%');
			else
			{
				j = 0;
				while (j < 2 && format[i] != *(funcs[j].symbol))
					j++;
				if (j < 2)
					count += funcs[j].print(args);
				else
				{
					count += _putchar('%');
					count += _putchar(format[i]);
				}
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
