#include <stdio.h>

/**
 *main - starting point
 *
 *Return: return 0 (success)
 *
 *Description: prints all single digit numbers (0-9)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	printf("%d", num);
	printf("\n");

	return (0);
}
