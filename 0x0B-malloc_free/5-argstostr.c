#include "holberton.h"
/**
 * argstostr - entry point
 * @ac: numbers of arguments
 * @av: pointer of each argument
 * Return: a pointer of all arguments concatenated
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size, comparador, posicion;
	char *new;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}

	new = (char *)malloc(sizeof(char) * (1 + size + ac));

	if (new == NULL)
		return (NULL);

	for (; comparador < ac; comparador++)
	{
		for (k = 0; av[comparador][k] != '\0'; k++)
		{
			new[k + posicion] = av[comparador][k];
		}
		posicion = posicion + k;
		new[posicion++] = '\n';
	}
	return (new);
}
