#include "main.h"
#include <stddef.h>

/**
 * _strchr - localise un caractère dans une chaîne
 * @s: la chaîne à parcourir
 * @c: le caractère à rechercher
 *
 * Return: pointeur vers la première occurrence de c dans s, ou NULL si absent
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
