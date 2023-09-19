#include "main.h"
/**
*print_sign - Determine if the input number is
*greater, is equal to or less than zero
*
*@n: character to be verified(input number of an integer)
*
*Return: return 0 or 1
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
	
	else 
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n')
}
