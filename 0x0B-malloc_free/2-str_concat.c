#include "holberton.h"
/**
 * str_concat - Creates an array of chars.
 * @s1: Array number 1
 * @s2: Array number 2
 *
 * Return: Pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int a;
	int b;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	ptr = (char *)malloc(2 + sizeof(char) * (i + j));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
	{
		ptr[a] = s1[a];
	}

	for (b = 0; s2[b] != '\0'; b++)
	{
		ptr[a + b] = s2[b];
	}

	return (ptr);
}
