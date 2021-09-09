#include "main.h"
/**
 *_atoi - Converts String to integer
 *@s: Input
 *Return: h
 */

int _atoi(char *s)
{
	int i;
	int b, a;

	b = 0;
	a = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			a *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (b < 0)
				b = (b * 10) - (s[i] - '0');
			else
				b = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (a < 0)
		b *= -1;

	return (b);
}
