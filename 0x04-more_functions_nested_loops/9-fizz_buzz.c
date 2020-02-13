#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0)
{
printf("Fizz");
printf(" ");
}
else if ((i % 5) == 0)
{
printf("Buzz");
printf(" ");
}
else if (((i % 5) == 0) && ((i % 3) == 0))
{
printf("FizzBuzz");
printf(" ");
}
else
{
printf("%d", i);
printf(" ");
}
}
printf("\n");
return (0);
}
