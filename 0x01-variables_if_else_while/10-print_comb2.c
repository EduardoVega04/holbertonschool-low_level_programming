#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int n2;
for (n = 0; n <= 9; n++)
{
for (n2 = 0; n2 <= 9; n2++)
{
putchar(n + '0');
putchar(n2 + '0');
if ((n < 9) || (n2 < 9))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
