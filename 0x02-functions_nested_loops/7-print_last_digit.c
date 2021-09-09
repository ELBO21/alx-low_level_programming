#include "main.h"

/**
 *print_last_digit - Prints the last digit of a number
 *
 *@i: Input intiger
 *
 *Return: Always (last digit of i)
 */

int print_last_digit(int i)
{
	int x;

	if (i < 0)
	{
		x = -1 * (i % 10);
		_putchar(x + '0');
		return (x);
	}
	else
	{
		x = i % 10;
		_putchar(x + '0');
		return (x);
	}
}
