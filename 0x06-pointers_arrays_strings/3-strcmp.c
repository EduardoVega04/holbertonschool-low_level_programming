#include "holberton.h"
/**
 * _strcmp - Compares two strings
 * @s1: The string to test
 * @s2: The string to test
 * Return: An interer, the difference between strings
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
{
i++;
}
return (s1[i] - s2[i]);
}


