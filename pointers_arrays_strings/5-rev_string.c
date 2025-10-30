#include "main.h"

/**
 * rev_string - renverse une chaîne de caractères
 * @s: chaîne à inverser
 *
 * Return: rien
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;

	/* Trouver la longueur de la chaîne */
	while (s[i] != '\0')
	{
		i++;
	}

	/* Inverser la chaîne */
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
}
