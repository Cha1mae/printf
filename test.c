

/**
 * printf_reverse - Prints a string in reverse order
 * @args: List of arguments (string)
 * @printed: Number of characters printed so far
 * Return: Updated count of printed characters
 */

in
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		printed++;

	}

	return (printed);
}
