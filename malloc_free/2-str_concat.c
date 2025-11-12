#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatène deux chaînes de caractères
 * dans un nouvel espace mémoire
 * @s1: première chaîne
 * @s2: deuxième chaîne
 *
 * Return: pointeur vers la nouvelle chaîne, ou NULL si échec
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size1, size2;
	char *buffer;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	buffer = malloc(sizeof(char) * (size1 + size2 + 1));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		buffer[i] = s1[i];

	for (j = 0; j < size2; j++)
		buffer[i + j] = s2[j];

	buffer[i + j] = '\0';

	return (buffer);
}
