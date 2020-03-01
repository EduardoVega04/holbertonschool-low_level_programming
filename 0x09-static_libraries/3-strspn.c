#include "holberton.h"
/**
 * _strspn - Get the lenght of a prefix substring
 * @s: The string to test
 * @accept: The string to test
 * Return: The lenght of s that contains all accept characters
 *
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int largo = 0;
int tmp = 0;
for (i = 0; s[i] != '\0'; i++)
{
tmp = largo;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
largo++;
}
}
if (tmp == largo)
{
return (largo);
}
}
return (largo);
}
