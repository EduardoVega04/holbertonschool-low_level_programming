#include "holberton.h"
/**
 *binary_to_uint-converts a binary number to an unsigned int
 *@b: is pointing to a string of 0 and 1 chars
 *
 *Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;
	unsigned int binario = 1;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
	}

	i--;

	while (i >= 0)
	{
		if (b[i] == '1')
			num = num + binario;
		binario = binario * 2;
		i--;
	}
	return (num);
}
