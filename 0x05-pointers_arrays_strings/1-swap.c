#include "main.h"
#include <stdio.h>

/**
 * swap_int - function swaps the value of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
