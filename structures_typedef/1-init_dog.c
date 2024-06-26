#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* init_dog - initializes a variable of type struct dog
* Description - see above comment
* @d: pointer to structure
* @name: dog name
* @age: dog age
* @owner: dogs owner
* Return: Always 0 (success)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
