#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers from 0 to 10
 * but in a different way from the previous exercise
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
