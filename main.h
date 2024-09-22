#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>

int _putchar(char c);
int _puts(const char *str);
int print_char(va_list args);
int print_string(va_list args);
int handle_format(char format, va_list args);
int _printf(const char *format, ...);

#endif /* MAIN_H */
