#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog (copied)
 * @age: age of the dog
 * @owner: owner of the dog (copied)
 *
 * Return: pointer to new dog_t, or NULL if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	size_t i, len_name = 0, len_owner = 0;

	/* Treat NULL strings as empty strings */
	if (!name)
		name = "";
	if (!owner)
		owner = "";

	/* Compute string lengths */
	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	/* Allocate struct */
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	/* Allocate and copy name */
	d->name = malloc(len_name + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	/* Allocate and copy owner */
	d->owner = malloc(len_owner + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i < len_owner; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';

	/* Set age */
	d->age = age;

	return (d);
}
