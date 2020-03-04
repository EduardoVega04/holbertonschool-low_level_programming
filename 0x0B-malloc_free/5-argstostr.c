#include "holberton.h"
/**
 * argstostr - entry point
 * @ac: numbers of arguments
 * @av: pointer of each argument
 * Return: a pointer of all arguments concatenated
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int comparador = 0;
	int posicion;
	char *new;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i] != '\0'; i++)
		;

	new = (char *)malloc(1 + sizeof(char) * 8000);

	while (comparador < ac)
	{
		for (j = 0; av[comparador][j] != '\0'; j++)
		{
			new[j + posicion] = av[comparador][j];
		}
		posicion = posicion + j;
		new[posicion++] = '\n';
		comparador++;
	}
	return (new);
}
