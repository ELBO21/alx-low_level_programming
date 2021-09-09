#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return : No
 */

void times_table(void)
{
	int i,j;
	int x;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; J++)
		{
			x = i * j;
			if (x >9)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else 
				_putchar(x + '0');
			_putchar(44);
		}
		_putchar('\n');
	}
}

