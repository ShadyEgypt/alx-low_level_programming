#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Check for digits (0 through 9)
 * @c: int type param
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);

	return (0);
}
