#ifndef MAIN_H
#define MAIN_H

/*
 * File: dog.h
 * Desc: Header file that defines a new type struct dog.
 */

/**
 * struct dog - new type define for dog with elements
 * @name: The name of the dog
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * dog_t - Typedef for struct dog
 */

#endif
#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MAIN_H */
