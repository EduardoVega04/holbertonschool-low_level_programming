#include "variadic_functions.h"
/**
 * sum_them_all - Print the sum of the arguments
 * @n: Number of arguments
 * Return: The sum o the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sumatoria = 0;
	unsigned int i = 0;

	va_list mylist;

	va_start(mylist, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sumatoria += va_arg(mylist, int);
	}

	va_end(mylist);

	return (sumatoria);
}
