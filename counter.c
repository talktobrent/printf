#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * counter - This function counts the length of strings
 * @string: The string to count
 * Return: count of string, minus null character
 */

int counter(char *string)
{
	int i = 0;

	for (i = 0; string[i] != '\0'; i++)
		;

	return (i);
}
