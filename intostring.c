#include <stdlib.h>
#include <stdio.h>

char * intostring(int n)
{

long x;
unsigned int count, adjust;
char *string;

string = malloc(sizeof(char) * 12);

x = n;
count = 0;

if (x < 0)
{
	string[count++] = '-';
	x = x * -1;
}

if (x > 9)
{
	adjust = 10;

	while (x / adjust >= 10)
		adjust = adjust * 10;

	string[count++] = ((x / adjust) + '0');

	while (adjust >= 10)
	{
		adjust = adjust / 10;
		string[count++] = (((x / adjust) % 10)  + '0');
	}

}

else
	string[count++] = n + '0';

string[count] = 0;

return (string);
}

int main (int argc, char *argv[])
{
	if (argc > 1)
	{
	printf("%s\n", intostring(atoi(argv[1])));
	return (0);
	}

	return (1);
}

