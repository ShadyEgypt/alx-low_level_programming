#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: print the largest prime factor of the number
 * 612852475143
 * @n - the number we want to get its prime factor
 * @maxPrime - maximum prime factor
 * @i - iterator 
 * Return: 0
 */

int main(void)
{
    long n = 612852475143;
    long maxPrime = -1;
    int i;

    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

    while (n % 3 == 0) {
        maxPrime = 3;
        n = n / 3;
    }


    for (i = 5; i <= sqrt(n); i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
        while (n % (i + 2) == 0) {
            maxPrime = i + 2;
            n = n / (i + 2);
        }
    }

    printf("%ld\n", maxPrime);

    return (0);
}

