#include "main.h"

/**
 *  print_sign - function prints the sign of a number
 *  @n: Character to be checked
 *  Return: 1 if positive,0 if it's equal to 0 and -1 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
