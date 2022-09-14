include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: is an ASCII character
 *
 * Prototype: int _islower(int c);
 *
 * Return: 1 if c is lowercase else returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
