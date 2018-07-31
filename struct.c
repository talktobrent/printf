#include "holberton.h"
#include <stdio.h>

/**
 * get_op_func - This function selects the correct func to
 * perform the operation
 * @s: The operator passed as arguement to program
 * Return: A pointer to the function that corresponds to the operator
 */

int _printf(const char *format, ...)
{
	conv_t conv[] = {
		{"c", _ch},
		{"s", _str},
		{"i", _int},
		{"d", _int},
		{"%", _perc},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == *(conv[i]).cp)
		{
			/* return that value */
			return (*(conv[i]).f);
		}
		i++;
	}

	return (sum);
}
