#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char n = 0;
while(n <= 9)
{
putchar(n + '0');
putchar(',');
putchar(' ');
n++;
}
putchar('\n');
return (0);
}
