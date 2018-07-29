#include <stdio.h>

int main()
{
	write(1, "Hello %%c\n", sizeof("Hello %%c\n"));

	return (0);
}
