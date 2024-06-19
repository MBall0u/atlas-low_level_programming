#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * 
 * 
 * 
 * 
 * 
 * 
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct new_dog
	{
	char *name = name;
	float age = age;
	char *owner = owner;
	}
	return (new_dog);
}