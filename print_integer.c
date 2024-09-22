#include "main.h"
#include <limits.h>
/**
* print_num - Recursively print an integer.
* @num: The integer to be printed.
*
* Return: The number of characters printed.
*/
int print_num(int num)
{
int count = 0;

if (num / 10)
	count += print_num(num / 10);

count += _putchar((num % 10) + '0');
return (count);
}

/**
* print_integer - Prints an integer to standard output.
* @args: A va_list containing the integer argument to be printed.
*
* This function retrieves an integer from the variable arguments list
* (va_list), converts it to its string representation (if necessary),
* and outputs it to the standard output using _putchar or similar
* functions. The function returns the number of characters printed.
*
* Return: The number of characters printed.
*/

int print_integer(va_list args)
{
int count = 0;
int num = va_arg(args, int);

if (num == INT_MIN)
{
	count += _puts("-2147483648");
	return (count);
}
if (num < 0)
{
	count += _putchar('-');
	num = -num;
}

count += print_num(num);
return (count);
}
