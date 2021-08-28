#include <stdio.h>

/**
 *main - starting point
 *
 *Return: return 0 (success)
 *
 *Descripitions: Prints hexadecimal numbers
 */

int main(void)
{
	char hex;

	for (hex = '0'; hex <= '9'; hex++)
	putchar(hex);
	for (hex = 'a'; hex <= 'f'; hex++)
	putchar(hex);
	putchar('\n');

	return (0);
}
