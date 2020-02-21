#include "holberton.h"
/**
 * leet - Encondes a string into 1337
 * @s: the string to encode
 *
 * Return: s
 */
char *leet(char *s)
{
char minuscula[] = "aeotl";
char mayuscula[] = "AEOTL";
char numeros[] = "43071";
int a;
int b;
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; minuscula[b] != '\0' && mayuscula[b] != '\0'; b++)
{
if (s[a] == minuscula[b] || s[a] == mayuscula[b])
{
s[a] = numeros[b];
}
}
}
return (s);
}
