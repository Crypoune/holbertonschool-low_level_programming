#include "main.h"
#include <stddef.h>

/**
 * _strstr - localise une sous-chaîne
 * @haystack: la chaîne principale
 * @needle: la sous-chaîne à trouver
 *
 * Return: pointeur vers le début de la sous-chaîne, ou NULL si absente
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (NULL);
}
