#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - crée un tableau de caractères et l'initialise
 * avec un caractère donné.
 * @size: taille du tableau
 * @c: caractère à utiliser pour initialiser le tableau
 *
 * Return: pointeur vers le tableau, ou NULL si size = 0 ou si malloc échoue
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		printf("Calm down !\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
