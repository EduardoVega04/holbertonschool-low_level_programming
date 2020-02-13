#include "holberton.h"
/**
 * _isdigit - Checks if c is a digit or not
 * @c: The integer to test
 *
 * Return: 1 if c is a digit, otherwise return 0
 *
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
