#include <stdlib.h>
#include "holberton.h"
/**
 * inToString - converts int to string
 * @n: integer given
 * Return: new string
 */

char *inToString(int n)
{

	unsigned int x;
	int count, adjust;
	char *string;

	string = malloc(sizeof(char) * 12);
	if (string == NULL)
		exit(-1);

	x = 0;
	count = 0;

	if (n < 0)
	{
		string[count++] = '-';
		x = n * -1;
	}
	else
		x = n;

	if (x > 9)
	{
		adjust = 10;

		while (x / adjust >= 10)
			adjust = adjust * 10;

		string[count++] = ((x / adjust) + '0');

		while (adjust >= 10)
		{
			adjust = adjust / 10;
			string[count++] = (((x / adjust) % 10)  + '0');
		}

	}

	else
		string[count++] = n + '0';

	string[count] = 0;

	return (string);
}
