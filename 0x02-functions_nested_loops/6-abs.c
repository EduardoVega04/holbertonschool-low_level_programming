#include "holberton.h"
/**
 * _abs - Computes the absolute value of an iinteger
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
if (n < 0)
{
return (n * (-1));
}
else
{
return (n);
}
}
