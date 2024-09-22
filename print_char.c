#include "main.h"
#include <stdarg.h>
/**
* print_char - Prints a character.
* @args: The argument list from _printf.
*
* Return: The number of characters printed.
*/
int print_char(va_list args)
{
char ch = va_arg(args, int);

return (_putchar(ch));
}
