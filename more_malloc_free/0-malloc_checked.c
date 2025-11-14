#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alloue de la mémoire à l'aide de malloc
 * @b: taille de la mémoire à allouer (en octets)
 *
 * Return: pointeur vers la mémoire allouée
 * le programme quitte avec le code 98 si malloc échoue
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
