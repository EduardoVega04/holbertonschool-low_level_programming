#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of arguments of program when executed
 * @argv: The string with arguments of program when executed
 * Return: 0
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
