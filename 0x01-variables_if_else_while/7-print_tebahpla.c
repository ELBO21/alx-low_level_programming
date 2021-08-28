#include <stdio.h>

/**
 *main - starting point
 *
 *Return: return 0 (success)
 *
 *Description: prints lowercase alphabets in reverse
 */

int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	putchar(alph);
	putchar('\n');

	return (0);
}
