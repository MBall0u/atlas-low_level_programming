#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the struct dog
 * Description - see above
 * @d: the inputted struct
 * Return: Always 0 (success)
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(*d->name);
		free(*d->owner);
	
		free(d);
		d = NULL;
	}
}