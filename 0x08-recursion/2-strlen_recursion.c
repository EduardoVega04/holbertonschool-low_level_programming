#include "holberton.h"
/**
 * _strlen_recursion - Prints the length string
 * @s: The string to test
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
if (*s)
{
s++;
return (1 + _strlen_recursion(s));
}
}
