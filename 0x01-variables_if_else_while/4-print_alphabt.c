#include <stdio.h>

/**
 *main - starting point
 *
 *Return: return 0 (success)
 *
 *Description: prints alphabets in lowercase except q and e
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
