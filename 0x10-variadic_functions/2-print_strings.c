#include "variadic_functions.h"
/**
 * print_strings - Function that prints strings
 * @n: Number of arguments
 * @separator: Separator between strings
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list mylist;

	va_start(mylist, n);
	char *string;

	for (i = 0; i < n; i++)
	{
		string = va_arg(mylist, char*);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (i == (n - 1))
		{
			break;
		}
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(mylist);
}
