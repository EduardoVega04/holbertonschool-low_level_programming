#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'a';
while (a <= 'z')
{
if (a == 'q' || a == 'e')
{
a++;
}
else
{
putchar(a);
a++;
}
}
putchar('\n');
return (0);
}
