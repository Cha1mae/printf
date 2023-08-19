#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
  * _printf - Printf function
  * @format: Format
  * Return: The number of characters printed
**/
int _printf(const char *format, ...)
{
	va_list list;
	int i;

	char buffer[BUFF_SIZE];

	va_start(list, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			int ret = handle_print(format, &i, list, buffer);

			if (ret < 0)
			{
				return (-1);
			}
		}
		else
		{
			handle_write_char(format[i], buffer, i);
			i++;
		}
	}

	va_end(list);

	write(1, buffer, i);
	return (i);
}
