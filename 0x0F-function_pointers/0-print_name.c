#include "function_pointers.h"
/**
 * print_name - Function that prints names
 * @name: Char (name) to print
 * @f: Pointer to a function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
