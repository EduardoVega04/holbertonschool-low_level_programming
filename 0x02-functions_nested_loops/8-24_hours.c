#include "holberton.h"
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
int n1;
int n2;
for (n1 = 0; n1 < 24; n1++)
{
for (n2 = 0; n2 < 60; n2++)
{
_putchar(n1 / 10 + '0');
_putchar(n1 % 10 + '0');
_putchar(':');
_putchar(n2 / 10 + '0');
_putchar(n2 % 10 + '0');
_putchar('\n');
}
}
}
