#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

int _putchar(char c);
int counter(char *string);
int checker(const char *format);
int _printf(const char *format, ...);
char *inToString(int n);
int _ch(int c);
int _str(char *string);
int _int(int n);

/**
 * struct cp - Struct cp
 *
 * @cp: The conversion specifier
 * @f: The function associated
 */
typedef struct cp
{
	char *cp;
	int (*f)();
} conv_t;

#endif
