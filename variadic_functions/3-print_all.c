#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on a format string
 * @format: a string of characters representing the types of arguments
 * 'c' for char, 'i' for integer, 'f' for float, 's' for string
 * any other character is ignored
 *
 * Description: This function prints the arguments passed according to the
 * format string. Arguments are separated by ", " except after the last one.
 * If a string argument is NULL, "(nil)" is printed instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, (char) va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
			{
				char *s = va_arg(args, char *);

				if (!s)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			}
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
