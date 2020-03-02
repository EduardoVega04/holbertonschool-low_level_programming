#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of arguments of program when executed
 * @argv: The string with arguments of program when executed
 * Return: 0
 *
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (argv[i] != '\0')
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
