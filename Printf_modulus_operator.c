#include "main.h"

/**
 * Prints_modulus_operator - Print a modulus operator
 * @args: List of arguments (not used for modulus operator)
 * @printed: Number of characters printed so far
 * Return: The updated count of printed characters
 */
int Prints_modulus_operator(va_list args, int printed)
{
	_putchar('%');
	return (printed + 1);
}
