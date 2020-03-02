#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point. Multiplies two numbers
 * @argc: The number of arguments of program when executed
 * @argv: The string with arguments of program when executed
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
