#include "holberton.h"
/**
 * p_c - Entry Point
 * Description: character
 * @valist: parameter to check
 * Return: print character
 */
int p_c(va_list valist)
{
	char pc;

	pc = va_arg(valist, int);
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
/**
 * p_di - Entry Point
 * Description: Integer
 * @valist: Parameter to check
 * Return: print integer
 */
int p_di(va_list valist)
{
	int pdi, x, i, ct;
	char *w;

	pdi = va_arg(valist, int);
	x = pdi;
	for (ct = 0; pdi / 10 != 0; ct++)
		pdi = pdi / 10;
	w = malloc(sizeof(int) * ct);
	if (w == NULL)
		return (0);
	for (i = 0; i < ct; i++)
	{
		w[ct - i] = x % 10;
		x = x / 10;
	}
	free(w);
	return (write(1, w, ct));
}
