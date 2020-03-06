#include "holberton.h"
/**
 * main - Entry point. Multiplies two numbers
 * @argc: The number of arguments of program when executed
 * @argv: The string with arguments of program when executed
 * Return: 0
 *
 */
int main(int argc, *char argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (isdigit(argv[1]) == 0 || isdigit(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}

	int digit1 = atoi(argv[1]);
	int digit2 = atoi(argv[2]);

	printf("%d\n", digit1 * digit2);
	return (0);
}
