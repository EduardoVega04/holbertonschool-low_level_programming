#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: Returns 0 if all its ok
 **/
int main(int argc, char *argv[])
{

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else
	{
		printf("%i\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	}
	return (0);
}
