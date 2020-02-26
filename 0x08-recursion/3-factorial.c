#include "holberton.h"
/**
 * factorial - Calculates and returns the factorial of n
 * @n: The integer to test
 * Return: The factorial of n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
int resultado = n * factorial(n - 1);
return (resultado);
}
}
