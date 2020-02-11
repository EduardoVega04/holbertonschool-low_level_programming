#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - Prints to 98
 * @n: The character to test
 *
 * Return: All natural numbers to 98
 *
 */
void print_to_98(int n)
{
if (n < 98)
{
int i;
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i == 98)
{
printf("\n");
break;
}
printf(",");
printf(" ");
}
}
else if (n == 98)
{
int i = 98;
printf("%d", i);
printf("\n");
}
else
{
int i;
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i == 98)
{
printf("\n");
break;
}
printf(",");
printf(" ");
}
}
}
