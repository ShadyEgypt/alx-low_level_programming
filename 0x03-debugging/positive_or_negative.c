#include "main.h"
/**
* positive_or_negative - function that prints if integer is positive or negative
* Description: a simple function to show if a number is + - or 0
* @n: a var to be entered by user
* Return: 0
*/

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
}
