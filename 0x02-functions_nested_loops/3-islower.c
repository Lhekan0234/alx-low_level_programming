#include "main.h"
/**
 * _islower - shows if the input is a 
 * lowercase character, Another case, shows
 * 0
 * @c: Thecharacter in ASCII code
 *
 * Return: 1 for the lowercase character, 0 for the upppercase character
 */
int _islower(int c)
{
	if (c >=97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
