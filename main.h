#ifndef MAIN_H
#define MAIN_H

// Standard library headers required
#include <stdarg.h>
#include <stdio.h>

// Function prototypes
int _printf(const char *format, ...);
void handle_char(char c);
void handle_string(const char *s);
void handle_percent(void);

// Function prototype for my own putchar
int _putchar(char c);

#endif // MAIN_H
