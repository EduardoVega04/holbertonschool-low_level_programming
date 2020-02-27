#include "holberton.h"
/**
 * mysqrt - Function to calculate the square root
 * @x: number
 * @y: incrementor
 * Return: Varies depending the input;
 */
int mysqrt(int x, int y)
{
if (x == (y * y))
return (y);
else if (x > (y * y))
return (mysqrt(x, y + 1));
else
return (-1);
}
/**
 *_sqrt_recursion - Calculate the square root of a number
 * @n: The number to test
 * Return: The square root of the number or -1 of not
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else if (n == 1)
return (1);
else if (n < 0)
return (-1);
else
return (mysqrt(n, 1));
}
