#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substracts two integers
 * @a: First integer
 * @b: Second integer
 * Return: The substraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: First integer
 * @b: Second integer
 * Return: The division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Get the remainder of the division of two integers
 * @a: First integer
 * @b: Second integer
 * Return: The reminder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
