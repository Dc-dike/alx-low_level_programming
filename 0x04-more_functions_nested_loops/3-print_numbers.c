#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function prints numbers since 0 is up to 9
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}