#include "main.h"
#include <stdlib.h>

/**
 * _strdup - crée une copie d'une chaîne de caractères
 * @str: chaîne à dupliquer
 *
 * Return: pointeur vers la nouvelle chaîne, ou NULL si erreur
 */
char *_strdup(char *str)
{
	char *buffer;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	buffer = malloc(sizeof(char) * (size + 1));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = str[i];
	buffer[i] = '\0';

	return (buffer);
}
