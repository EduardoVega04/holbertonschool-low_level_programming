#include "holberton.h"
/**
 * string_nconcat - Concatenate two strings with conditions
 * @s1: String number 1
 * @s2: String number 2
 * @n: Number of bytes to concatenate
 *
 * Return: Pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0' && j < n; j++)
		;

	ptr = malloc((i + j) + 1);

	for (k = 0; s1[k] != '\0'; k++)
	{
		ptr[k] = s1[k];
	}

	for (l = 0; s2[l] != '\0' && l < n; l++)
	{
		ptr[k + l] = s2[l];
	}

	return (ptr);
}
