#include "main.h"

/**
 * print_alphabet_x10 - function prints alphabet x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	char a;

	for (i = 1; i <= 10 ; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(i);
		_putchar('\n');
	}
}
