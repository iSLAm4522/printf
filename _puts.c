#include "main.h"
/**
 * _puts - Outputs a string to standard output.
 * @str: Pointer to the string to be printed.
 *
 * This function iterates through the provided string and writes
 * each character to standard output using the _putchar function.
 * It returns the number of characters written, excluding the null
 * byte that terminates the string.
 *
 * Return: The number of characters printed.
 */

int _puts(const char *str)
{
int count = 0;
while (*str)
{
_putchar(*str++);
count++;
}
return (count);
}
