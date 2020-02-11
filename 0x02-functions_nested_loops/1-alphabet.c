#include "holberton.h"
/**
 *void - Entry point
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
char alphabet;
for(char alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
 _putchar('\n');
}
