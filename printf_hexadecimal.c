#include "main.h"

/**
 * printf_binary - Prints the binary of an unsigned integer
 * @num: The unsigned integer to be converted to binary
 * @printed: The count of characters printed so far
 * Return: The updated count of printed characters
 */

int printf_binary(unsigned int num, int printed)
{
	int binary[32] = {0}; /* Array to store the binary digits */

	int i = 0; /* Index for the binary array */

	if (num == 0)
{

	_putchar('0'); /* Print a '0' if the number is 0 */

	printed++;

	return (printed);
}

  /* Convert the decimal number to binary */
while (num > 0)
{

	binary[i] = num % 2; /* Store the remainder as binary digit */

	num /= 2; /* Divide the number by 2 for the next iteration */

	i++;
}

/* Print the binary representation digit by digit */

while (i > 0)
{

	i--;

	_putchar('0' + binary[i]); /* Print the binary digit */

	printed++;
}

return (printed); /* Return the updated count of printed characters */
}

