#include "holberton.h"
/**
 * reverse_array - revere an array of integers
 * @a: the array to test
 * @n: number of elements to swap
 */
void reverse_array(int *a, int n)
{
int i = 0;
int aux;
n--;
while (i < n)
{
aux = a[i];
a[i] = a[n];
a[n] = aux;
i++;
n--;
}
}
