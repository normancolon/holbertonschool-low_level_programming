#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: pointer to the new struct dog, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *new_name, *new_owner;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return NULL;


	new_name = malloc(strlen(name) + 1);
	if (!new_name)
	{
		free(dog); 
		return NULL;
	}
	strcpy(new_name, name);
	dog->name = new_name;

	new_owner = malloc(strlen(owner) + 1);
	if (!new_owner)
	{
		free(new_name); 
		free(dog);
		return NULL;
	}
	strcpy(new_owner, owner);
	dog->owner = new_owner;


	dog->age = age;

	return dog;
}

