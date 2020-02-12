#include "holberton.h"
/**
 * times_table - Prints the 9 times table
 *
 *
 * Return: Nothing
 *
 */
void times_table(void)
{
int ejeA = 0;
int ejeB;
int num;

while (ejeA < 10)
{
ejeB = 0;
while (ejeB < 10)
{
num = ejeA * ejeB;
if (num > 9)
{
_putchar(num / 10 + '0');
_putchar(num % 10 + '0');
}
else if (ejeB != 0)
{
_putchar(' ');
_putchar(num + '0');
}
else
{
_putchar(num + '0');
}
if (ejeB != 9)
{
_putchar(',');
_putchar(' ');
}
ejeB++;
}
_putchar('\n');
ejeA++;
}
}
