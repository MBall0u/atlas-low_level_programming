#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the inputted structure
 * Description - see above
 * @d: inputted structure
 * Return: Always 0 (success)
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		else if (d->age == 0)
		{
			printf("Name: %s\n(nil)\nOwner: %s\n", d->name, d->owner);
		}
		else if (d->owner == NULL)
		{
			printf("Name: %s\nAge: %f\n(nil)\n", d->name, d->age);
		}
		else
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}