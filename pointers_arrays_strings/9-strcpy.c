#include "main.h"

/**
 * _strcpy - copie une chaîne de caractères vers un autre buffer
 * @dest: pointeur vers le buffer de destination
 * @src: pointeur vers la chaîne source à copier
 *
 * Description: cette fonction copie le contenu de la chaîne `src`
 * dans la chaîne `dest`, y compris le caractère nul de fin `\0`.
 *
 * Return: pointeur vers `dest`
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
