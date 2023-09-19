#include "main.h"

/**
 * _isalpha - checks for alphabetic character 
 * (shows 1 if the outputis a, letter Another case, shows 8)
 * @c: the character to be checked ibn ASCII code
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
	    (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(''\n)
}
