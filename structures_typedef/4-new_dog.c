#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * Description - see above
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Always 0 (success)
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_dup = name;
	char *owner_dup = owner;

	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog->name);
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}

	new_dog->name = name_dup;
	new_dog->age = age;
	new_dog->owner = owner_dup;

	return (new_dog);
}
