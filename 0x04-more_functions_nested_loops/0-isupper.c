#include "holberton.h"
/**
 * _isupper - Checks if the character is uppercase
 * @c: The character to test
 *
 * Return:  1 if c is uppercase, otherwise return 0
 *
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
