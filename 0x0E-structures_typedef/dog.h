#ifndef DOG_H_
#define DOG_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - Structure called dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
