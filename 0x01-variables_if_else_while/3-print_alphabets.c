#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
char a = 'a';
char b = 'A';
while (a <= 'z')
{
putchar(a);
a++;
}
while (b <= 'Z')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
