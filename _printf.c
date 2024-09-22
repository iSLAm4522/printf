#include "main.h"

/**
* _printf - Outputs formatted data to standard output.
* @format: The format string containing the characters to print
* and the format specifiers.
*
* Return: The number of characters printed.
*/

int _printf(const char *format, ...)
{
va_list args;
int count = 0, i = 0;

va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
{
	va_end(args);
	return (-1);
}

while (format[i])
{
	if (format[i] == '%')
	{
	i++;
	count += handle_format(format[i], args);
	}
	else
	count += _putchar(format[i]);

	i++;
}
va_end(args);
return (count);
}
