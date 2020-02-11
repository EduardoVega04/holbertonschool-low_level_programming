#include "holberton.h"
/**
 * _islower - entry point
 * @c: integer to test
 * Checks if is lowercase or not
 * Return: 1 if c is lowercase, otherwise return 0
 *
 */

int _islower(int c)
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
