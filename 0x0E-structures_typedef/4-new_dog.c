#include "dog.h"
/**
 * new_dog - Creates a new structure dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Return a pointer to the structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char name_cpy = name;
	char owner_cpy = owner;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;

	return (ptr);
}
