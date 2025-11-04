#include "main.h"

/**
 * _memcpy - copie une zone mémoire
 * @dest: destination où copier les octets
 * @src: source à copier
 * @n: nombre d’octets à copier
 *
 * Return: pointeur vers dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
