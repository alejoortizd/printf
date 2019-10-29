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
	unsigned int x, z, i, ct, neg = 0;
	int pdi;
	char *w;

	pdi = va_arg(valist, int);
	x = pdi;
	if (pdi < 0)
	{
		neg = 1;
		x = x * -1;
	}
	for (ct = 1; pdi / 10 != 0; ct++)
		pdi = pdi / 10;
	w = malloc((sizeof(char) * ct) + neg);
	if (w == NULL)
		return (0);
	for (i = 1; i <= ct; i++)
	{
		w[ct - i + neg] = ((x % 10) + 48);
		x = x / 10;
	}
	if (neg == 1)
		w[0] = '-';
	z = (write(1, w, ct + neg));
	free(w);
	return (z);
}
