#include "main.h"

/**
 * _strcat - concatenates the string src to the end of dest
 * @dest: destination string
 * @src: source string to append
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* find the end of dest */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* append src to dest */
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	/* terminate dest with null byte */
	dest[i] = '\0';

	return (dest);
}
