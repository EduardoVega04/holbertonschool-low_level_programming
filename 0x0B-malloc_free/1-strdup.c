#include "holberton.h"
/**
 * _strdup - Creates an array of chars.
 * @str: Array of characters
 *
 * Return: NULL if str is NULL, Returns a pointer to srt
 *         or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;

	ptr = (char *)malloc(sizeof(char) * j);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
