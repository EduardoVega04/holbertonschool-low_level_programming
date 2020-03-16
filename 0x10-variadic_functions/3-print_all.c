#include "variadic_functions.h"
/**
 * print_all - prints all arguments passed to it
 * @format: list of argument types
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *ptr;

	va_list(mylist);
	va_start(mylist, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(mylist, int));
			break;
		case 'i':
			printf("%d", va_arg(mylist, int));
			break;
		case 'f':
			printf("%f", va_arg(mylist, double));
			break;
		case 's':
			ptr = va_arg(mylist, char*);
			if (ptr == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", ptr);
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		     || format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}
