#include "main.h"

/**
 * _strlen - renvoie la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne de caractères à mesurer
 *
 * Return: la longueur de la chaîne
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
