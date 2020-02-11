#include "holberton.h"
/**
 * print_alphabet - entry point
 *
 * Prints the alphabet
 *
 * Returns nothing
 */
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
