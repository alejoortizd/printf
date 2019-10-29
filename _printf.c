#include "holberton.h"

/**
 * aux - Entry point
 * Description: Write a function that produces a function according to a format
 * @format: Is the parameter to be checked
 * Return: function to be used
 */
int (*aux(const char *format))(va_list)
{
	int k;

	base_t fun[] = {
		{"c", p_c},
		{"s", p_s},
		{"%", p_p},
		{NULL, NULL}
	};

	for (k = 0; fun[k].ptr; k++)
		if (*(fun[k].ptr) == format[1])
			return (fun[k].f);
	return (fun[k].f);
}

/**
 * _printf - Entry point
 * Description: Write a function that produces output according to a format
 * @format: Is the parameter to be checked
 * Return: output
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int l;
	int ct = 0;
	int (*x)();

	va_start(valist, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (l = 0; format[l] != '\0'; l++)
	{
		if (format[l] == '%')
		{
			x = aux(format + l);

			if (x != NULL)
			{
				ct += x(valist);
				l++;
			} else
				ct += _putchar(format[l]);
		} else
			ct += _putchar(format[l]);
	}
	va_end(valist);
	return (ct);
}
