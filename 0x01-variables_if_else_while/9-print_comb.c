#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char n = 0;
while (n <= 9)
{
if (n < 9)
{
putchar(n + '0');
putchar(',');
putchar(' ');
n++;
}
else
{
putchar(n + '0');
n++;
}
}
putchar('\n');
return (0);
}
