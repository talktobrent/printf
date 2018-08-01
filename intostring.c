#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * print_number - This function prints an integer
 * @n: Integer to evaluate
 */

int inToString(int n)
{
	int count = 0;

	/* if n is divisible by 10 */
	if (n / 10)
	{
		/* call function again and evaluate */
		inToString(n / 10);
		/* take second digit and store in n */
		n %= 10;
		/* if second digit negative */
		if (n < 0)
			/* make it positive */
			n *= -1;
	}
	/* if n is NOT divisible by 10 */
	else
		/* and if n is negative */
		if (n < 0)
		{
			/* print a minus sign */
			_putchar('-');
			count++;
			/* and make n positive */
			n *= -1;
		}
	/* print out n */
	_putchar(n + '0');
	count++;


	return(count);
}
