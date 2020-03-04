#include "holberton.h"
/**
 * strtow - Split a string into words
 * @str: String to split
 *
 * Return: Return pointer to the array.
 */
char **strtow(char *str)
{
	char **ptr;
	int i;
	int j = 0;
	int num_strings = 0;

	if (str == NULL || str == 0)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
		{
			while (str[i] != ' ')
			{
				i++;
			}
			num_strings++;
		}
		i++;
	}

	ptr = (char **)malloc(1 + sizeof(char *) * num_strings);

	i = 0;

	for (i = 0; i < num_strings; i++)
	{
		ptr[i] = (char *)malloc(1 + sizeof(char));
	}

	i = 0;
	num_strings = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
		{
			while (str[i] != ' ')
			{
				ptr[num_strings][j] = str[i];
				i++;
				j++;
			}
			j = 0;
			num_strings++;
		}
		i++;
	}
	return (ptr);
}
