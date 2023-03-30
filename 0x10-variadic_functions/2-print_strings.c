#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - a function that prints strings followed by a new line
 * @separator: pointer to a seperator
 * @n: number of arguments
 *
 * Result: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(list);
}
