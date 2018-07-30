#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
#include <stdlib.h>

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

	int i, c, x, sum = 0;
	int freeFlag = 0;
	char *string, *intString;

	va_start(ap, format);

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
				break;
			case 'i':
			case 'd':
				x = va_arg(ap, int);
				intString = intostring(x);
				write(1, intString, (counter(intString) + 1));
				sum += counter(intString);
				i++;
				freeFlag++;
				break;
			default:
				break;
			}
		}
	}

	va_end(ap);

	if (freeFlag > 0)
	free(intString);

	return (sum);
}
