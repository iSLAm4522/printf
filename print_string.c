#include "main.h"
#include <stdarg.h>

/**
* print_string - Prints a string.
* @args: The argument list from _printf.
*
* Return: The number of characters printed.
*/
int print_string(va_list args)
{
char *str = va_arg(args, char *);

if (str == NULL)
	str = "(null)";
return (_puts(str));
}
