#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>

/**
  * _ch - prints a char
  * @c: char given
  * Return: 1
  */

int _ch(int c)
{
	write(1, &c, sizeof(int));
	return (1);
}

/**
  * _str - prints a string
  * @string: string given
  * Return: length of string
  */

int _str(char *string)
{
	int count;

	count = 0;

	count = counter(string);
	write(1, string, count);
	return (count);
}

/**
  * _num - converts int to char string, and prints it
  * @n: int given
  * Return: char string
  */

int _num(int n)
{

	char *string;
	int count;

	count = 0;
	string = 0;

	string = inToString(n);
	if (string == NULL)
		return (0);

	count = counter(string);
	write(1, string, count + 1);
	free(string);
	return (count);
}
