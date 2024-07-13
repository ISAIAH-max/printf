#ifndef MAIN_H
#define MAIN_H

/* Standard library headers required */
#include <stdarg.h>
#include <stdio.h>

typedef struct printer
{
  char *symbol;
  int (*print)(va_list args);
} printer_t;

/* Function prototype printf */
int _printf(const char *format, ...);

/* Function prototypes for handling different formats */
int _printf_char(va_list args);
int _printf_string(va_list args);
int _printf_int(va_list args);

/* Function prototype for for my own putchar */
int _putchar(char c);

#endif /* MAIN_H */
