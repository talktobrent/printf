<<<<<<< HEAD
#include <unistd.h>
#include <stdlib.h>
=======
>>>>>>> 4e0edcba6fafdf149f47e7966da20dd2e4a5423f
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
<<<<<<< HEAD


=======
#include <stdio.h>
>>>>>>> 4e0edcba6fafdf149f47e7966da20dd2e4a5423f
/**
 * counter - counts length of string
 * @string: string given
 * Return: count of string, minus null character
 */

int counter(char *string)
{
	int i = 0;

	for (i = 0; string[i] != '\0'; i++)
		;

	return (i);
}


/**
 * _printf - prints any chars or strings given
 * @format: input string
 * Description: prints input string, unless special characters are found,
 * in which case, it prints string or char arguments
 * Return: total number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;

	int i, c, sum = 0;
	char *string;
	int *x;

	x = 0;

	va_start(ap, format);

	checker(format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], sizeof(char));
			sum++;
		}
		else
		{
			switch (format[i + 1])
			{
			case 'c':
				c = va_arg(ap, int);
				write(1, &c, sizeof(int));
				sum++;
				i++;
				break;
			case 's':
				string = va_arg(ap, char *);
				write(1, string, (counter(string) + 1));
				sum += counter(string);
				i++;
				break;
			case '%':
				write(1, "%", sizeof(char));
				sum++;
				i++;
<<<<<<< HEAD
			default:
				write(1, "Unknown conversion type!\n", sizeof("Unknown conversion type!\n"));
				exit(1);
=======
				break;
			case 'i':
			case 'd':
				x = va_arg(ap, int);
				write(1, x, sizeof(int));
				sum++;
				i++;
				break;
			default:
				break;
>>>>>>> 4e0edcba6fafdf149f47e7966da20dd2e4a5423f
			}
		}
	}

	va_end(ap);
	return (sum);
}
