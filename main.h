#ifndef MAIN_H
#define MAIN_H

/* Standard library headers required */
#include <stdarg.h>
#include <stdio.h>

/* Function prototype printf */
int _printf(const char *format, ...);

/* Function prototypes for handling different formats */
int handle_char(char c);
int handle_string(const char *s);

/* Function prototype for for my own putchar */
int _putchar(char c);

#endif /* MAIN_H */
