#include "holberton.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to print
 *
 * Return: 1 if is alpha, 0 if not
 *
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
