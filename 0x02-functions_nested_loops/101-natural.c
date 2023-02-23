#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * @i - iterator
 * @tot - total or sum of numbers
 * Return: 0
 */
int main(void)
{
	int i = 1;
	int tot = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			tot += i;
		else if (i % 5 == 0)
			tot += i;

		i++;
	}
	printf("%d\n", tot);

	return (0);
}
