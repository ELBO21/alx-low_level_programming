#include <stdio.h>

/**
 *main - starting point
 *
 *Return: return 0 (success)
 *
 *Description: prints both lowercase and uppercase alphabets
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	putchar(alph);
	for (alph = 'A'; alph <= 'Z'; alph++)
	putchar(alph);
	putchar('\n');

	return (0);
}
