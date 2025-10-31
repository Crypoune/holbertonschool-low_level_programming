#include "main.h"

/**
 * _strncat - Ajoute n caractères de src à la fin de dest
 * @dest: Chaîne de destination
 * @src: Chaîne source
 * @n: Nombre maximum de caractères à copier depuis src
 *
 * Return: Pointeur vers la chaîne dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* trouver la fin de dest */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* ajouter au maximum n caractères de src */
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];

	/* terminer dest avec un caractère nul */
	dest[i] = '\0';

	return (dest);
}
