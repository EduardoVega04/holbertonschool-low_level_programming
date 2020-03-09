#include "dog.h"
/**
 * print_dog - Prints the structure
 * @d: Pointer to the structure
 *
 * Description: Prints the structure with a format
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", (*d).name);
	printf("Age: %d\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
