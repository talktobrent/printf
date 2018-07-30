#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * error_checker - Checks for errors
 * @format: Argument array
 * Return: 0 for success, -1 for an error
 */

int error_checker(const char *format)
{
	/* loop through format arguments */
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			/* check for unknown converstion type */
			if (format[i + 1] != 'c' || format[i + 1] != 's' ||
				format[i + 1] != 'd' || format[i + 1] != 'i')
			{
				/* print it anyway */
				write(1, '%', sizeof(int));
				i++;
			}
			else if (
		}
	}
}
