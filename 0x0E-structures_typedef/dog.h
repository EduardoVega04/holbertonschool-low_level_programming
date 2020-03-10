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
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif
