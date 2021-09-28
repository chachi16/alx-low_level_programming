#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type
 * @d: pointer to the structure
 * @name: name's dog
 * @age: age's dogg
 * @owner: owner's dog
 *
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
