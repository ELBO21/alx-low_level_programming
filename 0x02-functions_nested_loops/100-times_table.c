#include "main.h"

/**
 *print_times_table - Prints the n times table starting from 0
 *@n: Input integer
 *Return: No
 */

void print_times_table(int n)
{
	int i = 0;
	int j,x;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			x = i * j;
			if (x > 99)
			{
				_putchar(x / 100 + '0');
				_putchar((x / 10 % 10) + '0');
				_putchar(x % 10 + '0');
			}
			else if (x > 9)
			{
				_putchar(32);
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(32);
				_putchar(32);
				_putchar(x + '0');
			}
			else
				_putchar(x + '0');

			if (j != n)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
		i++;
	}
}
