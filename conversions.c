#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>

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

	if (string == '\0')
		return (0);

	count = counter(string);
	write(1, string, count + 1);

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
	count = counter(string);
	write(1, string, count + 1);
	free(string);

	return (count);
}


