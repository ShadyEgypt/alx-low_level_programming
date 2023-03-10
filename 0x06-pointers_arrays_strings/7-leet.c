#include "main.h"

/**
 * *leet - encode a string into 1337
 * @s: string
 * @letters - Array of letters needed to be encoded
 * @num - Array of coressponding code numbers for letters
 * @i - iterates over letters
 * @j - iterates over the string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	char letters[] = "AEOTLaeotl";
	char num[] = "4307143071";
	int i;
	int j;

	for (i = 0; letters[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == letters[i])
				s[j] = num[i];
		}
	}
	return (s);
}
