#include "holberton.h"
/**
 * p_c - Entry Point
 * Description: character
 * @c: parameter to check
 * Return: print character
 */
int p_c(va_list c)
{
	char pc;

	pc = va_arg(c, int);
	return (write(1, &pc, 1));
}
/**
 * p_s - Entry Point
 * Description: String
 * @valist: parameter to check
 * Return: print string
 */
int p_s(va_list valist)
{
	char *ps;
	int n;

	ps = va_arg(valist, char *);
	if (ps == NULL)
		ps = "(null)";
	for (n = 0; ps[n] != '\0'; n++)
		;
	return (write(1, ps, n));
}
/**
 * p_p - Entry Point
 * Description: percentage
 * @valist: parameter to check
 * Return: print percentage
 */
int p_p(va_list valist)
{
	(void) valist;
	return (write(1, "%", 1));
}
