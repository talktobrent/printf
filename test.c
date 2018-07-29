#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int counter(char *string)
{
	int i = 0;

	for (i = 0; string[i] != '\0'; i++)
		;

	return (i);
}


int _printf(const char *format, ...)
{
	va_list ap;

	int i, c, sum = 0;
	char *string;

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
				write(1, string, sizeof(va_arg(ap, char*)));
				sum += counter(string);
				i++;
				break;
			case '%':
				write(1, "%", sizeof(char));
				sum++;
				i++;
			}
		}
	}

	va_end(ap);

	return (sum);
}
