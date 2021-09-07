int _putchar(char c);
void reset_to_98(int *n);
int _strlen(char *s)i;
void swap_int(int *a, int *b);
void _puts(char *str);
#include "main.h"
/**
 *_puts - Prints a string
 *@str: input string
 *Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
