#include "holberton.h"
/**
 * _strlen - Return the lenght of a string
 * @s: The string to test
 *
 * Return: Integer: The lenght of a string
 */
int _strlen(char *s)
{
int contador = 0;
int indice = 0;
while (s[indice] != '\0')
{
contador++;
indice++;
}
return (contador);
}
