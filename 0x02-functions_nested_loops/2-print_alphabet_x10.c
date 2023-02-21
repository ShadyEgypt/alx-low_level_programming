#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase
 * Description: This is 2nd task in the project
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	char c;
	for (i = 0; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

}
