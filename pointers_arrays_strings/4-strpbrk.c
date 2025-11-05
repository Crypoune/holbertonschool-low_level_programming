#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - recherche le premier caractère de s présent dans accept
 * @s: la chaîne à parcourir
 * @accept: les caractères à rechercher
 *
 * Return: pointeur vers le premier caractère trouvé, ou NULL si absent
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
