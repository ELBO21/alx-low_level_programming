#include <stdio.h>

/**
 *main - starting point
 *
 *Return: return 0 (success)
 *
 *Description: prints single digit numbers 0-9 using putchar
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	putchar(num + '0');
	putchar('\n');

	return (0);
}
