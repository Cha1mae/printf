#include "main.h"

/**
 * 
 * @args: List of arguments (string)
 * @printed: Number of characters printed so far
 * Return: Updated count of printed characters
 */

int printf_reverse(va_list args, int printed)
{
	
	while (str[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		printed++;

	}

	return (printed);
}



