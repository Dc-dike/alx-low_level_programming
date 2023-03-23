#include "main.h"
/**
 * _isupper - function checks for upper case letters
 *
 * @c: function to be checked
 *
 * Return: 1 if it is upper case
 * and 0 if it it is lower case
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

