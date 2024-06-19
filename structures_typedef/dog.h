#ifndef dog_h
#define dog_h

/**
* struct dog - setting up a new structure
* @name: dog name
* @age: dog age
* @owner: dogs owner
*
* Description: see above comments for a description
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
