#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0
 *
 */
int main(void)
{
long n = 612852475143;
long i;

for (i = 2; i < n ; i++)
{
while (n % i == 0)
{
n = n / i;
}
}
printf("%li", n);

return (0);
}
