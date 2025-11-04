#include "main.h"

/**
 * _strspn - obtient la longueur du préfixe composé uniquement de caractères autorisés
 * @s: la chaîne à analyser
 * @accept: l’ensemble des caractères autorisés
 *
 * Return: nombre d’octets initiaux dans s appartenant à accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (accept[j] == '\0')
			return (i);
	}

	return (i);
}
