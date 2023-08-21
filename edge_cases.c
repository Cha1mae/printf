#include <stdio.h>
#include "main.h"

int main(void)
{
	int len = 0;
	int len2 = 0;

	char valid_char = 'A';
	char *valid_str = "valid string";

	len = _printf("A %s sentence\n", valid_str);
	len2 = printf("A %s sentence\n", valid_str);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
	len2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple %s entence\n", "valid");
	len2 = printf("A simple %s entence\n", "valid");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("Percentage: %%\n");
	len2 = printf("Percentage: %%\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("NULL: %c, %s\n", valid_char, valid_str);
	len2 = printf("NULL: %c, %s\n", valid_char, valid_str);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("%%");
	len2 = printf("%%");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple sentence%%");
	len2 = printf("\nA simple sentence%%");
	printf("\nLen:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	return (0);
}
