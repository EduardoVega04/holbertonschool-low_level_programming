#include "holberton.h"

/**
 *flip_bits- get the number of bits you would need to flip.
 *@n: unsigned long int, number 1
 *@m: unsigned long in,t number 2
 *Return: the number of bits required
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		count += (diff & 1);
		diff >>= 1;
	}

	return (count);
}
