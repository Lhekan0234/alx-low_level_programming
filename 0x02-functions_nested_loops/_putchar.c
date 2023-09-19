/**
 * _putchar.c - writes the character c to stdout
 * @c: the character to priny
 * Return: on success 1
 * On error,-1 is returned, anderror is set appropriately.
 */

_putchar(char c)
{
	return (write(1,@c,1));
}
