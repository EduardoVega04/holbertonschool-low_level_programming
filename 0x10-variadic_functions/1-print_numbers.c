#include "variadic_functions.h"
/**
 * print_numbers - Function that prints numbers
 * @n: Numbers of arguments
 * @separator: Separator between numbers
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mylist;

	va_start(mylist, n);
	unsigned int i;

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(mylist, int));

		if (i == (n - 1))
		{
			break;
		}

		printf("%s", separator);
	}
	printf("\n");

	va_end(mylist);
}
