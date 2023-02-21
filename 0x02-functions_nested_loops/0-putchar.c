#include "main.h"
/**
 * main - Print putchar followed by a new line.
 * Description: This is first task in the project
 * Return: 0
 */
int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
