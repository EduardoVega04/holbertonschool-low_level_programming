#include "holberton.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Prints the alphabet ten times
 * Return: nothing
 *
 */
void print_alphabet_x10(void)
{
{
char alphabet;
int veces;
for (veces = 0; veces < 10; veces++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
}
}
