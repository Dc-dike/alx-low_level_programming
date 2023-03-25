#include "main.h"

/**
 * _isalpha - function prints alphabets
 * @c: the character to be checked
 * Return: 1 if c is an alphabet and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
