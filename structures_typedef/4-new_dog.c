#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog_t, or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, len_name = 0, len_owner = 0;

	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";

	while (name[len_name])
		len_name++;

	while (owner[len_owner])
		len_owner++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(len_name + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	d->owner = malloc(len_owner + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (i = 0; i < len_owner; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';

	d->age = age;

	return (d);
}
