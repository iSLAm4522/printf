#include "main.h"

/**
* handle_format - Handles format specifiers and prints accordingly.
* @format: The format specifier (e.g., 'c', 's', '%').
* @args: The argument list from _printf.
*
* Return: The number of characters printed for the specifier.
*/

int handle_format(char format, va_list args)
{
switch (format)
{
case '%':
	return (_putchar('%'));
case 'c':
	return (print_char(args));
case 's':
	return (print_string(args));
default:
	return ((_putchar('%')) + _putchar(format));
}
}
