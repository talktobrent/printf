#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int main()
{
        char name[10] = "Brent";
        char c = 'W';

        _printf("Hello %s Janski\n", name);
        _printf("Hi %c orld\n", c);
        _printf("\\n\n");
        _printf("Ours: %%\n");
        printf("Built-in: %%\n");

        return 0;
}
