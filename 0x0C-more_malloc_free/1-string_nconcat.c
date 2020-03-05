#include "holberton.h"
/**
 * get_string - Get the length of a string
 * @s: The string to test
 *
 * Return: The length of a string
 */
int get_string(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
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
	unsigned int j, k, s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_length = get_string(s1);
	s2_length = get_string(s2);

	if (n > s2_length)
	{
		n = s2_length;
	}

	ptr = malloc((s1_length + n) + 1);
	if (ptr == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
	{
		ptr[j] = s1[j];
	}

	for (k = 0; s2[k] != '\0' && k < n; k++)
	{
		ptr[k + j] = s2[k];
	}
	return (ptr);
}
