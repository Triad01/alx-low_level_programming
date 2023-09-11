#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
* new_dog - creates a new dog
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}
	new_dog_ptr->name = malloc(sizeof(char) * (strlen(name) + 1));
	new_dog_ptr->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_dog_ptr->name, name);
	new_dog_ptr->age = age;
	strcpy(new_dog_ptr->owner, owner);
	return (new_dog_ptr);
}

