#include "dog.h"
/**
 * free_dog - Frees dog
 * @d: Pointer to the structure
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}