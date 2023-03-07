#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of ints
 * @a: 2d array of int types
 * @size: size of array (square)
 * @i - iterates over the matrix
 * @sum - sum of the diagonal elements
 * @mat_size - size of a square matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum, mat_size;

	i = 0;
	sum = 0;
	mat_size = size * size;
	while (i < mat_size)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < mat_size)
	{
		if (i % (size - 1) == 0 && i != (mat_size - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}
