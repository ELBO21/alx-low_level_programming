#include "main.h"

/**
 *print_most_numbers - prints numbers except 2 and 4
 *Return: Nothing return
 */

void print_most_numbers(void)
{
	int x;

	x = 48;
	while (x <= 57)
	{
		if ((x != 50) && (x != 52))
		{
			_putchar(x);
		}
		x++;
	}
	_putchar('\n');
}
