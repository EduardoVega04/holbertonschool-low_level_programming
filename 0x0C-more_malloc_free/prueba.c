#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if(isdigit(num) == 0)
		printf("Es dígito, %d\n", num);
	else
		printf("No es dígito\n");

	if(isdigit(num2) == 0)
		printf("Es dígito, %d\n", num2);
	else
		printf("No es dígito\n");


	return (0);
}
