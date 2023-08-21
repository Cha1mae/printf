#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int printed;
	char *address;

	printf("Character:[%c]\n", 'H');
	printed = _printf("Character:[%c]\n", 'H');

	printf("String:[%s]\n", "I am a string !");
	printed += _printf("String:[%s]\n", "I am a string !");

	printf("Negative:[%d]\n", -762534);
	printed += _printf("Negative:[%d]\n", -762534);

	printf("Unsigned:[%lu]\n", 2147484671UL);
	printed += _printf("Unsigned:[%lu]\n", 2147484671UL);

	printf("Unsigned octal:[%lo]\n", 20000001777UL);
	printed += _printf("Unsigned octal:[%lo]\n", 20000001777UL);

	printf("Unsigned hexadecimal:[%lx, %lX]\n", 2147484671UL, 2147484671UL);
	printed += _printf("Unsigned hexadecimal:[%lx, %lX]\n", 2147484671UL, 2147484671UL);

	address = "0x7ffe637541f0";
	printf("Address:[%p]\n", (void *)address);
	printed += _printf("Address:[%p]\n", (void *)address);

	printf("Percent:[%%]\n");
	printed += _printf("Percent:[%%]\n");

	printf("Len:[%12d]\n", 123456789);
	printed += _printf("Len:[%12d]\n", 123456789);

	printf("Unknown:[%%r]\n");
	printed += _printf("Unknown:[%%r]\n");

	return (0);
}

