/**
  * chCon - prints a char
  * @c: char given
  * Return: 1
  */

int chCon(int c)
{
	write(1, &c, sizeof(int));
	return (1);
}

/**
  * strCon - prints a string
  * @string: string given
  * Return: length of string
  */

int strCon(char *string)
{
int count;
count = 0;

	if (string == NULL)
		return (-1);

	count = counter(string);
	write(1, string, count + 1);

	return (count);
}

/**
  * intCon - converts int to char string, and prints it
  * @n: int given
  * Return: char string
  */

int *intCon(int n)
{
char *string;
int count;
count = 0;
string = NULL;

	string = inToString(n);
	count = counter(string);
	write(1, string, count + 1);

	return (count);
}


