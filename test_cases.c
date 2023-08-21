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
printf("Unsigned octal:[%o]\n", 20000001777);/*Octal*/
printed += _printf("Unsigned octal:[%o]\n", 20000001777);
printf("Unsigned hexadecimal:[%x, %X]\n", 2147484671, 2147484671);/*Hex*/
printed += _printf("Unsigned hexadecimal:[%x, %X]\n", 2147484671, 2147484671);
address = "0x7ffe637541f0";/*Address*/
printf("Address:[%p]\n", (void *)address);
printed += _printf("Address:[%p]\n", (void *)address);
printf("Percent:[%%]\n");/*Percent*/
printed += _printf("Percent:[%%]\n");
printf("Len:[%12d]\n", 123456789);/*Length modifier*/
printed += _printf("Len:[%12d]\n", 123456789);
printf("Unknown:[%r]\n");/*Unknown format specifier*/
printed += _printf("Unknown:[%r]\n");

return (0);
}
