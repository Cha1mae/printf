#include "main.h"

int main(void)
{
int printed;
char *address;

    /*Character*/
printf("Character:[%c]\n", 'H');
printed = _printf("Character:[%c]\n", 'H');

    /*String*/
printf("String:[%s]\n", "I am a string !");
printed += _printf("String:[%s]\n", "I am a string !");

    /*Integer*/
printf("Negative:[%d]\n", -762534);
printed += _printf("Negative:[%d]\n", -762534);

    /*Unsigned Integer*/
printf("Unsigned:[%u]\n", 2147484671);
printed += _printf("Unsigned:[%u]\n", 2147484671);

    /*Octal*/
printf("Unsigned octal:[%o]\n", 20000001777);
printed += _printf("Unsigned octal:[%o]\n", 20000001777);

    /*Hexadecimal (lowercase and uppercase)*/
printf("Unsigned hexadecimal:[%x, %X]\n", 2147484671, 2147484671);
printed += _printf("Unsigned hexadecimal:[%x, %X]\n", 2147484671, 2147484671);

    /*Address*/
address = "0x7ffe637541f0";
printf("Address:[%p]\n", (void *)address);
printed += _printf("Address:[%p]\n", (void *)address);

    /*Percent*/
printf("Percent:[%%]\n");
printed += _printf("Percent:[%%]\n");

    /*Length modifier*/
printf("Len:[%12d]\n", 123456789);
printed += _printf("Len:[%12d]\n", 123456789);

    /*Unknown format specifier*/
printf("Unknown:[%r]\n");
printed += _printf("Unknown:[%r]\n");

return (0);
}

