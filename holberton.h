#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct base - Structure for printf
 * @c: parameter to check
 * @f: parameter to check
 * @ptr: parameter to check
 */
typedef struct base
{
	char *ptr;
	int (*f)();
} base_t;

/* general functions */
int _putchar(char c);
int (*aux(const char *format))(va_list);

/* prototype of the 0 task */
int _printf(const char *format, ...);
int p_p(va_list valist);
int p_c(va_list valist);
int p_s(va_list valist);

/* prototype of the 1 task */
int p_di(va_list valist);

#endif
