#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 0;
char a_to_f = 'a';
while (a <= 9)
{
putchar(a + '0');
a++;
}
while (a_to_f <= 'f')
{
putchar(a_to_f);
a_to_f++;
}
putchar('\n');
return (0);
}
