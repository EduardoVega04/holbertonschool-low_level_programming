#include "holberton.h"
/**
 * more_numbers - Print from 0 to 14 ten times
 *
 * Return: Nothing
 *
 */
void more_numbers(void)
{
int x, y;
for (x = 0; x <= 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (y > 9)
{
_putchar((y / 10) + '0');
}
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}
