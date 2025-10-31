#include "main.h"

/**
 * _strncpy - Copie au maximum n caractères de src vers dest
 * @dest: Chaîne de destination
 * @src: Chaîne source
 * @n: Nombre maximum de caractères à copier
 *
 * Return: Pointeur vers la chaîne dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
