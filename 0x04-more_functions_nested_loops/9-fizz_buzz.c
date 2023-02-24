#include <stdio.h>

/**
 * main - print fizz buzz from numbers 1 to 100
 * Description: Multiples of 3, print Fizz.
 * Multiples of 5, print Buzz.
 * Multiples of both 3 and 5 should print FizzBuzz.
 * @k - iterator
 * Return: 0
 */
int main(void)
{
	int k;

	k = 1;
	while (k <= 100)
	{
		if (k % 3 == 0 && k % 5 == 0)
			printf("FizzBuzz");
		else if (k % 3 == 0)
			printf("Fizz");
		else if (k % 5 == 0)
			printf("Buzz");
		else
			printf("%d", k);

		if (k != 100)
			printf(" ");
		k++;
	}
	printf("\n");

	return (0);
}
