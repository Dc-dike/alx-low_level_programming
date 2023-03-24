#include "main.h"

/**
 * _isdigit - function checks that number is in the rage of 0 to 9
 * @c: the number to be checked
 * Return: 1 if the number is in the rangr of 0 to 9
 * and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

