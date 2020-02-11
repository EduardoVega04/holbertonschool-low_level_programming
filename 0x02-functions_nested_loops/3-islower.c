#include "holberton.h"
/**
 * _isalpha(int c) - entry point
 *
 * Checks if is lowercase or not
 * Return: 1 if c is lowercase, otherwise return 0
 *
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
