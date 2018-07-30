#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - prints any chars or strings given
 * @format: input string
 * Description: prints input string, unless special characters are found,
 * in which case, it prints string or char arguments
 * Return: total number of characters printed
 */

int checker(const char *format)
{
//	va_list ap;

	int i, c, sum = 0;
	char *string;

//	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
//				c = va_arg(ap, int);
//				write(1, &c, sizeof(int));
				sum++;
				i++;
				break;
			case 's':
//				string = va_arg(ap, char *);
//				write(1, string, (counter(string) + 1));
				sum += counter(string);
				i++;
				break;
			case '%':
//				write(1, "%", sizeof(char));
				sum++;
				i++;
				break;
			default:
				#error Unknown
			}
		}
	}

//	va_end(ap);

	return (0);
}
